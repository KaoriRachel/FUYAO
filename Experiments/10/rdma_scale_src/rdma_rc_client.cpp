#include "utils.h"
#include <unistd.h>
#include <getopt.h>
#include <string>
#include <thread>
#include <vector>
#include <iostream>
#include "rdma/infinity.h"
#include "rdma/queue_pair.h"
#include "rdma/shared_memory.h"
template <typename T>
using Arc = std::shared_ptr<T>;
static pthread_mutex_t onMutex;
static pthread_barrier_t barrier;
struct Config {
    // socket
    std::string ip_addr;
    int tcp_port;

    // rdma
    std::string device_name;
    int ib_port;
    int ib_gid_idx;

    // type
    bool is_server;

    //other
    int thread_num;
    int data_size;
    int pid;
} config_{};

struct RDMAInfo {
    faas::rdma::QueuePairInfo qp_info;
    faas::rdma::MemoryRegionInfo mr_info;
};

enum RDMA_OP {
    RDMA_WRITE,
    RDMA_READ,
    RDMA_SEND,
    RDMA_RECV
};

//faas::rdma::Infinity *infinity_;
//faas::rdma::QueuePair *qp_;
//faas::rdma::SharedMemory *shared_memory_;

//utils::Socket *socket_;

void prepare_rdma_info(Arc<faas::rdma::Infinity> infinity_,faas::rdma::QueuePair *qp_,faas::rdma::SharedMemory *shared_memory_,struct RDMAInfo &self_rdma_info_) {
    // prepare queue pair
    auto qp_info = qp_->GetQueuePairInfo();
    // prepare rdma shared memory
    shared_memory_ = new faas::rdma::SharedMemory();
    auto shared_memory_info = shared_memory_->GetSharedMemoryInfo();
    qp_->RegisterMemoryRegion("SHARED_MEMORY", shared_memory_info.addr, shared_memory_info.length);
    auto mr_info = qp_->GetMemoryRegionInfo("SHARED_MEMORY");

    self_rdma_info_ = {
            .qp_info = qp_info,
            .mr_info = mr_info
    };
}

void parse_command_line(int argc, char *argv[]) {
    static struct option long_options[] = {
            {.name = "port", .has_arg = 1, .val = 'p'},
            {.name = "ib-dev", .has_arg = 1, .val = 'd'},
            {.name = "ib-port", .has_arg = 1, .val = 'i'},
            {.name = "gid-idx", .has_arg = 1, .val = 'g'},
            {.name = "thread-num", .has_arg = 1, .val = 't'},
            {.name = "data-size", .has_arg = 1, .val = 's'},
            {.name = "pid", .has_arg = 1, .val = 'x'},
            {.name = nullptr, .has_arg = 0, .val = '\0'}
    };
    int opt;

    while ((opt = getopt_long(argc, argv, "p:d:i:g:t:s:x:", long_options, nullptr)) != EOF) {
        switch (opt) {
            case 'p':
                config_.tcp_port = strtol(optarg, nullptr, 0);
                break;
            case 'd':
                config_.device_name = strdup(optarg);
                break;
            case 'i':
                config_.ib_port = strtoul(optarg, nullptr, 0);
                break;
            case 'g':
                config_.ib_gid_idx = strtoul(optarg, nullptr, 0);
                break;
            case 't':
                config_.thread_num = strtoul(optarg, nullptr, 0);
                break;
            case 's':
                config_.data_size = strtoul(optarg, nullptr, 0);
                break;
            case 'x':
                config_.pid = strtoul(optarg, nullptr, 0);
                break;
            default:
                perror("invalid arguments");
                exit(-1);
        }
    }

    if (optind == argc - 1) {
        // this is client
        config_.ip_addr = argv[optind];
        config_.is_server = false;
    }else {
        perror("invalid input");
        exit(-1);
    }
}

void exchange_rdma_info(Arc<utils::Socket> socket_,Arc<faas::rdma::Infinity> infinity_,faas::rdma::QueuePair *qp_,faas::rdma::SharedMemory *shared_memory_,RDMAInfo &self_rdma_info_,RDMAInfo &peer_rdma_info_) {
    int fd = socket_->conn();
    // send rdma info to server
    prepare_rdma_info(infinity_,qp_,shared_memory_,self_rdma_info_);
    send(fd, &self_rdma_info_, sizeof(RDMAInfo), 0);
    // waiting response
    char recv_buf[1024];
    int num_recv = read(fd, recv_buf, 1024);
    if (num_recv != sizeof(RDMAInfo)) {
        perror("client: invalid rdma info");
        exit(-1);
    }
    peer_rdma_info_ = *(RDMAInfo *) recv_buf;
}

void build_rdma_channel(faas::rdma::QueuePair *qp_,RDMAInfo &peer_rdma_info_) {
    qp_->StateFromResetToInit();
    qp_->StateFromInitToRTR(peer_rdma_info_.qp_info.lid,
                            peer_rdma_info_.qp_info.qp_num,
                            peer_rdma_info_.qp_info.psn,
                            peer_rdma_info_.qp_info.gid);
    qp_->StateFromRTRToRTS();
}

long one_sided(uint32_t payload_size, RDMA_OP op,RDMAInfo &self_rdma_info_,RDMAInfo &peer_rdma_info_,faas::rdma::QueuePair *qp_) {
    auto start_time = utils::get_timestamp_ns();
    auto wr = faas::rdma::MakeWorkRequest(self_rdma_info_.mr_info, peer_rdma_info_.mr_info, 0, 0, 0, payload_size);
    uint64_t post_return=-1;
    switch (op) {
        case RDMA_READ:
            post_return=qp_->PostReadRequest(wr);
            break;
        case RDMA_WRITE:
            post_return=qp_->PostWriteRequest(wr);
            break;
        default:
            break;
    }
    if (post_return==-1){
        return -1;
    }
    int poll_result;
    do {
        poll_result = qp_->PollCompletion([](uint64_t) {});
    } while (poll_result == 0);

    auto end_time = utils::get_timestamp_ns();
    return end_time - start_time;

}

long two_sided(uint32_t payload_size, RDMA_OP op,RDMAInfo &self_rdma_info_,RDMAInfo &peer_rdma_info_,faas::rdma::QueuePair *qp_) {
    auto start_time = utils::get_timestamp_us();
    auto wr = faas::rdma::MakeWorkRequest(self_rdma_info_.mr_info, peer_rdma_info_.mr_info, 0, 0, 0, payload_size);
    switch (op) {
        case RDMA_SEND:
            qp_->SetNotifyNonBlock(faas::rdma::CompleteQueue::SEND_COMPLETE_QUEUE);
            qp_->PostSendRequest(wr);
            qp_->NotifyCompletion(faas::rdma::CompleteQueue::SEND_COMPLETE_QUEUE);
            break;
        case RDMA_RECV:
            qp_->SetNotifyNonBlock(faas::rdma::CompleteQueue::RECV_COMPLETE_QUEUE);
            qp_->PostRecvRequest(wr);
            qp_->NotifyCompletion(faas::rdma::CompleteQueue::RECV_COMPLETE_QUEUE);
            break;
        default:
            break;
    }
    auto end_time = utils::get_timestamp_us();
    return end_time - start_time;
}

void output_result(std::vector<long>& record_list){
    std::stringstream ss;
    for(auto record:record_list){
        ss<<record<<" ";
    }
    char *filename="record.log";
    int fd = open(filename, O_RDWR| O_APPEND);
    write(fd,ss.str().c_str(),ss.str().length());
    close(fd);
}
void test_rdma_one_sided_latency(uint32_t payload_size,RDMAInfo &self_rdma_info_,RDMAInfo &peer_rdma_info_,faas::rdma::QueuePair *qp_,int id) {
    long sum = 0, cnt = 50000;
    auto record_list=std::vector<long>(cnt);
    long t;
    auto start_time = utils::get_timestamp_ns();
    long sleep_time_sum=0;
    for (int i = 0; i < cnt; i++) {
        //asm volatile("" ::: "memory");
        //usleep(1000);
        //sum += one_sided(payload_size, RDMA_WRITE,self_rdma_info_,peer_rdma_info_,qp_);
        if(i%100==0){
            auto sleep_start_time = utils::get_timestamp_ns();
            usleep(std::rand()%100000);
            auto sleep_end_time = utils::get_timestamp_ns();
            sleep_time_sum+=(sleep_end_time-sleep_start_time);
        }
        t=one_sided(payload_size, RDMA_WRITE,self_rdma_info_,peer_rdma_info_,qp_);
        //don't record when error happened
        if(t==-1){
            output_result(record_list);
            return;
        }
        sum+=(t/1000);
        record_list[i]=t;
    }
    auto end_time = utils::get_timestamp_ns();
    double process_time=(end_time-start_time)*1.0/1000000000;
    double processed_data=(cnt*payload_size)*1.0/(1024*1024);
    output_result(record_list);
    printf("pid-thread %d-%d: payload_size = %d, complete a RDMA Write request need %ld us. Sleep time is %lf. Transfer %lf MB data in %lf s, rate is %lf MB/s\n",
           config_.pid,id,payload_size, sum / cnt,sleep_time_sum*1.0/1000000000,processed_data,process_time,processed_data/process_time);

}

void test_rdma_two_sided_latency(uint32_t payload_size) {
    long sum = 0, cnt = 100;

    for (int i = 0; i < cnt; i++){
        usleep(50);
        //sum += two_sided(payload_size, RDMA_SEND);
    }
    printf("payload_size = %d, complete a RDMA SEND request need %ld us\n", payload_size, sum / cnt);
}

unsigned int worker_fn(int id,Arc<faas::rdma::Infinity> infinity_,int data_size){
    //utils::Socket *socket_;
    //faas::rdma::Infinity *infinity_;
    faas::rdma::QueuePair *qp_;
    faas::rdma::SharedMemory *shared_memory_;
    struct RDMAInfo self_rdma_info_{};
    struct RDMAInfo peer_rdma_info_{};


    auto socket_=std::make_shared<utils::Socket>(config_.ip_addr.c_str(), config_.tcp_port);
    //infinity_ = new faas::rdma::Infinity(config_.device_name, config_.ib_port, config_.ib_gid_idx);

    pthread_mutex_lock(&onMutex);
    qp_ = infinity_->CreateQueuePair(false);
    pthread_mutex_unlock(&onMutex);

    //socket_ = new utils::Socket(config_.ip_addr.c_str(), config_.tcp_port);
    exchange_rdma_info(socket_,infinity_,qp_,shared_memory_,self_rdma_info_,peer_rdma_info_);
    build_rdma_channel(qp_,peer_rdma_info_);

    pthread_barrier_wait(&barrier);

    test_rdma_one_sided_latency(data_size,self_rdma_info_,peer_rdma_info_,qp_,id);
    delete qp_;
    delete shared_memory_;
    return 0;
}

int main(int argc, char *argv[]) {
    // step one: parse command line
    parse_command_line(argc, argv);
    int num_thread=config_.thread_num;
    pthread_mutex_init(&onMutex, NULL);
    pthread_barrier_init(&barrier, NULL, config_.thread_num);
    std::vector<std::thread> threads;
    auto infinity_=std::make_shared<faas::rdma::Infinity>(config_.device_name, config_.ib_port, config_.ib_gid_idx);

    for(int i=0;i<num_thread;i++){
        threads.push_back(std::thread(worker_fn,i,infinity_,config_.data_size));
    }

    for(int i=0;i<num_thread;i++){
        threads[i].join();
    }
    pthread_barrier_destroy(&barrier);
    pthread_mutex_destroy(&onMutex);
    pthread_exit(NULL);
    return 0;
}

