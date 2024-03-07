//
// Created by tank on 8/1/23.
//
#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <chrono>

constexpr int PORT = 8080;
constexpr int BUFFER_SIZE = 1024 * 1024; // Set a buffer size large enough for any data size

void sendData(int data_size) {
    int client_socket;
    struct sockaddr_in server_addr;
    char buffer[BUFFER_SIZE];

    // Create socket
    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket == -1) {
        std::cerr << "Error creating socket." << std::endl;
        return;
    }

    // Prepare the sockaddr_in structure
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);

    // Convert IP address from string to binary form
    if (inet_pton(AF_INET, "192.168.1.126", &server_addr.sin_addr) <= 0) {
        std::cerr << "Invalid address/Address not supported." << std::endl;
        close(client_socket);
        return;
    }

    // Connect to server
    if (connect(client_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        std::cerr << "Connection failed." << std::endl;
        close(client_socket);
        return;
    }

    // Fill buffer with random data of specified size
    // You can modify this part to use specific data, if needed.
    if(data_size == 512)
        buffer[0] = 'A';
    else if(data_size == 1024)
        buffer[0] = 'B';
    else if(data_size == 512 * 1024)
        buffer[0] = 'C';
    else if(data_size == 1024 * 1024)
        buffer[0] = 'D';
    else
        buffer[0] = 'A';

    for (int i = 1; i < data_size; i++) {
        buffer[i] = 'A' + (i % 26);
    }

    std::chrono::microseconds start_time = std::chrono::duration_cast< std::chrono::microseconds >(
            std::chrono::system_clock::now().time_since_epoch()
    );

    // Send data to server
    ssize_t sent_bytes = send(client_socket, buffer, data_size, 0);
    if (sent_bytes < 0) {
        std::cerr << "Error sending data." << std::endl;
        close(client_socket);
        return;
    }

    // Receive acknowledgment from the server
    char ack[3];
    recv(client_socket, ack, sizeof(ack), 0);


    std::chrono::microseconds end_time = std::chrono::duration_cast< std::chrono::microseconds >(
            std::chrono::system_clock::now().time_since_epoch()
    );

    // Calculate the round-trip time (RTT) here by measuring the time it took to send the data
    // and receive the acknowledgment from the server.


    std::cout << "Data of size " << data_size << " bytes sent to server." << " Token time: " << end_time.count() - start_time.count() <<std::endl;
    close(client_socket);
}

int main() {
    // Specify the data sizes in bytes (512B, 1KB, 512KB, 1MB, 512MB)
    int data_sizes[] = {512, 1024, 512 * 1024, 1024 * 1024};


    for (int size : data_sizes) {
        for(int i=0; i<10;i++)
            sendData(size);
    }

    return 0;
}
