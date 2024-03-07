//
// Created by tank on 3/17/23.
//

#ifndef LUMINE_EXPERIMENTS_UTILS_H
#define LUMINE_EXPERIMENTS_UTILS_H

#include <sys/types.h>
#include <ctime>
#include <arpa/inet.h>
#include <cstdio>
#include <cstring>
#include <sys/socket.h>
#include <unistd.h>
#include <string>
#include <fmt/core.h>
#include <fmt/format.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <cstdlib>

namespace exp07_utils {
    long get_timestamp_us() {
        struct timespec time_stamp;

        clock_gettime(CLOCK_REALTIME, &time_stamp);

        long timestamp_us = time_stamp.tv_sec * 1000000 + time_stamp.tv_nsec / 1000;
        return timestamp_us;
    }
}

#endif //LUMINE_EXPERIMENTS_UTILS_H
