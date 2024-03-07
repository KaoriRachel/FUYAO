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

int main() {
    int server_socket, new_socket;
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_addr_size = sizeof(client_addr);
    char buffer[BUFFER_SIZE];

    // Create socket
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket == -1) {
        std::cerr << "Error creating socket." << std::endl;
        return 1;
    }

    // Prepare the sockaddr_in structure
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(PORT);

    // Bind
    if (bind(server_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        std::cerr << "Bind failed." << std::endl;
        return 1;
    }

    // Listen
    listen(server_socket, 1);
    std::cout << "Server listening on port " << PORT << std::endl;

    while (true) {
        // Accept connection from an incoming client
        new_socket = accept(server_socket, (struct sockaddr *)&client_addr, &client_addr_size);
        if (new_socket < 0) {
            std::cerr << "Error accepting connection." << std::endl;
            return 1;
        }
        ssize_t received_bytes;
        ssize_t expected_bytes = 0;
        ssize_t sum = 0;
        bool first = true;
        // Receive data from client
        do{
            received_bytes = recv(new_socket, buffer, sizeof(buffer), 0);
            if(received_bytes > 0 && first){
                switch (buffer[0]) {
                    case 'A':
                        expected_bytes = 512; break;
                    case 'B':
                        expected_bytes = 1024; break;
                    case 'C':
                        expected_bytes = 512 * 1024; break;
                    case 'D':
                        expected_bytes = 1024 * 1024;
                        break;
                }
                first = false;
            }
            sum += received_bytes;
        }while(sum < expected_bytes);


        // Record the time and send an acknowledgment back to the client
        send(new_socket, "ACK", 3, 0);
        // Calculate the time taken for receiving data and sending acknowledgment
        // Record this time or send it back to the client for further processing
        std::cout << "Received " << expected_bytes << " bytes from client." <<std::endl;


        close(new_socket); // Close the socket for this client
    }

    close(server_socket); // Close the server socket
    return 0;
}
