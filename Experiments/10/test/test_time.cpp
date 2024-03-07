//
// Created by 76284 on 2023/3/13.
//
#include<ctime>
#include<iostream>
long get_timestamp_us() {
    struct timespec time_stamp;

    clock_gettime(CLOCK_REALTIME, &time_stamp);

    long timestamp_us = time_stamp.tv_sec * 1000000 + time_stamp.tv_nsec / 1000;
    return timestamp_us;
}
long get_timestamp_ns() {
    struct timespec time_stamp;

    clock_gettime(CLOCK_REALTIME, &time_stamp);

    long timestamp_ns = time_stamp.tv_nsec;
    return timestamp_ns;
}
int main(){
//    long t1=get_timestamp_us();
//    long t2=get_timestamp_us();
//    long t3=get_timestamp_us();
    long t1=get_timestamp_ns();
    long t2=get_timestamp_ns();
    long t3=get_timestamp_ns();
    std::cout<<t3-t1<<" "<<t2-t1<<" "<<t3-t2<<std::endl;
    return 0;
}