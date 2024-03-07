#ifndef MEDIA_MICROSERVICES_UTILS_H
#define MEDIA_MICROSERVICES_UTILS_H

#include <string>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <utility>
#include <arpa/inet.h>
#include <cstdio>
#include <cstring>
#include <sys/socket.h>
#include <unistd.h>
#include <fmt/core.h>
#include <fmt/format.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "http_parser.h"

namespace Finra {
    using json = nlohmann::json;

    inline std::string GetEnvVariable(std::string_view name,
                                      std::string default_value = "") {
        char *value = getenv(std::string(name).c_str());
        return value != nullptr ? value : std::move(default_value);
    }

    PassingMethod ChooseMessagePassingMethod() {
        auto method = GetEnvVariable("MessagePathingMethod", "IPC");
        if (method == "DRC_OVER_IPC") {
            return PassingMethod::DRC_OVER_IPC;
        } else if (method == "DRC_OVER_Fabric") {
            return PassingMethod::DRC_OVER_Fabric;
        } else if (method == "Fabric") {
            return PassingMethod::Fabric;
        } else {
            return PassingMethod::IPC;
        }
    }

    long get_timestamp_us() {
        struct timespec time_stamp;

        clock_gettime(CLOCK_REALTIME, &time_stamp);

        long timestamp_us = time_stamp.tv_sec * 1000000 + time_stamp.tv_nsec / 1000;
        return timestamp_us;
    }

    class HttpParser {
    public:
        HttpParser(char *data, int len) : data_(data), len_(len) {
            http_parser_init(&http_parser_, HTTP_RESPONSE);
            http_parser_settings_init(&http_parser_settings_);
            http_parser_.data = this;

            http_parser_settings_.on_body = HttpParserOnBodyCallback;
        }

        ~HttpParser() {
            free(buf_);
        }

        const char *extract_payload() {
            int nparsed = http_parser_execute(&http_parser_, &http_parser_settings_, data_, len_);

            if (nparsed != len_) {
                perror("parse http request error \n");
                return nullptr;
            }
            buf_ = (char *) malloc(payload_length_ + 1);
            memcpy(buf_, payload_, payload_length_);
            buf_[payload_length_] = '\0';

            return buf_;
        }

    private:
        char *data_;
        size_t len_;

        const char *payload_;

        char *buf_;

        size_t payload_length_;

        http_parser http_parser_;
        http_parser_settings http_parser_settings_;

        // parse http request
        static int HttpParserOnBodyCallback(http_parser *parser, const char *data, size_t length) {
            auto self = reinterpret_cast<HttpParser *>(parser->data);
            self->OnHttpParser(data, length);
            return 0;
        }

        int OnHttpParser(const char *data, size_t length) {
            payload_ = data;
            payload_length_ = length;
            return 0;
        }
    };

    class Socket {
    public:
        Socket(const char *ip, uint16_t port) : ip_(ip), port_(port) {
            serv_addr_.sin_family = AF_INET;
            serv_addr_.sin_addr.s_addr = INADDR_ANY;
            serv_addr_.sin_port = htons(port);
        }

        ~Socket() {
            // closing the connected socket
            close(client_fd_);
        }

        // return fd
        int conn() {
            // socket creation
            if ((sock_ = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
                perror("Socket creation error \n");
                return -1;
            }
            // Convert IPv4 and IPv6 addresses from text to binary
            if (inet_pton(AF_INET, ip_, &serv_addr_.sin_addr) <= 0) {
                perror("Invalid address/ Address not supported \n");
                return -1;
            }

            if ((client_fd_ = connect(sock_, (struct sockaddr *) &serv_addr_, sizeof(serv_addr_))) < 0) {
                perror("Connection Failed \n");
                return -1;
            }
            return sock_;
        }

        // non-block
        int listen_without_block() {
            // socket creation
            if ((sock_ = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
                perror("Socket creation error \n");
                return -1;
            }

            // Set socket opt
            int opt = 1;
            if(setsockopt(sock_, IPPROTO_TCP, TCP_NODELAY, (char *) &opt, sizeof(int))!=0){
                perror("Set socket opt error \n");
                return -1;
            }

            // bind
            if(bind(sock_, (struct sockaddr *) &serv_addr_, sizeof(serv_addr_)) < 0){
                perror("Bind error \n");
                return -1;
            }

            // listen
            if(listen(sock_, SOMAXCONN) < 0) {
                perror("listen error \n");
                return -1;
            }

            return 0;
        }

        // return fd
        int waiting_request(){
            int addrlen = sizeof(serv_addr_);
            int new_socket = accept(sock_, (struct sockaddr *)&serv_addr_, (socklen_t *)&addrlen);
            return new_socket;
        }

        int issue_http_request(const char *method, const char *url_path, const char *payload) {
            std::string message = fmt::format("{} {} HTTP/1.1\n"
                                              "Host: {}:{}\n"
                                              "User-Agent: curl/7.74.0\n"
                                              "Accept: */*\n"
                                              "Content-Length: {}\n"
                                              "Content-Type: application/x-www-form-urlencoded\n"
                                              "\n"
                                              "{}", method, url_path, ip_, port_, strlen(payload), payload);

            const char *send_buf = message.c_str();
            size_t send_length = message.length();

            int nsent, total_nsent = 0;

            while (total_nsent < send_length) {
                nsent = send(sock_, send_buf + total_nsent, send_length - total_nsent, 0);
                total_nsent += nsent;
            }

            return 0;
        }

        int recv_response(char *recv_buf, int max_num_read) const {
            int num_recv = read(sock_, recv_buf, max_num_read);
            return num_recv;
        }

    private:
        int client_fd_, sock_;
        const char *ip_;
        uint16_t port_;
        struct sockaddr_in serv_addr_;
    };


} //namespace media_service

#endif //MEDIA_MICROSERVICES_UTILS_H
