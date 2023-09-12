#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#include <sys/resource.h>
#include <time.h>

#include "pqcrypto_sign_dilithium2.h"

#define PORT 8080

static inline unsigned long long rdtsc(void){
        unsigned hi, lo;
        __asm__ __volatile__ ("rdtsc" : "=a"(lo), "=d"(hi));
        return ((unsigned long long)lo) | (((unsigned long long)hi) << 32);
}

struct performance_metrics{
        double keygen_time;
        double sign_time;
        double send_time;
};

void print_metrics(struct performance_metrics metrics){
        printf("\n---- Performance Metrics ----\n");
        printf("Time taken for key pair generation: %f microseconds\n", metrics.keygen_time);
        printf("Time taken to Sign message: %f microseconds\n", metrics.sign_time);
        printf("------------------------------\n");
}

long get_mem_usage(){
        struct rusage usage;
        getrusage(RUSAGE_SELF, &usage);
        return usage.ru_maxrss;
}

unsigned char pk[pqcrypto_sign_dilithium2_PUBLICKEYBYTES];
unsigned char sk[pqcrypto_sign_dilithium2_SECRETKEYBYTES];
unsigned char message[] = "This is an Authenticated Payload, Signed 7633254";
unsigned char signed_message[pqcrypto_sign_dilithium2_BYTES + sizeof(message)];

int main(){
        int server_fd, client_fd;
        struct sockaddr_in address;
        int addrlen = sizeof(address);

        struct performance_metrics metrics;
        clock_t start_time, end_time;

        struct rusage r_usage;
        unsigned long long start_cycles, end_cycles;

        printf("Initializing server socket...\n");
        server_fd = socket(AF_INET, SOCK_STREAM, 0);
        address.sin_family = AF_INET;
        address.sin_addr.s_addr = INADDR_ANY;
        address.sin_port = htons(PORT);

        bind(server_fd, (struct sockaddr *)&address, sizeof(address));
        listen(server_fd, 3);

        printf("Waiting for a connection...\n");
        client_fd = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen);

        printf("Generating Dilithium2  key pair...\n");
        start_time = clock();
        pqcrypto_sign_dilithium2_keypair(pk, sk);
        end_time = clock();
        metrics.keygen_time = (((double) (end_time - start_time)) / CLOCKS_PER_SEC)*1000000;
        printf("Sending key pair...\n");
        send(client_fd,pk,sizeof(pk),0);

        printf("Signing message...\n");
        unsigned long long signed_message_len;
        start_time = clock();
        pqcrypto_sign_dilithium2(signed_message, &signed_message_len, message, sizeof(message) - 1, sk);
        end_time = clock();
        metrics.sign_time = (((double) (end_time - start_time)) / CLOCKS_PER_SEC) * 1000000;

        printf("Sending signed message  to client...\n");
        start_time = clock();
        send(client_fd, signed_message, signed_message_len, 0);
        end_time = clock();
        metrics.send_time = (((double) (end_time - start_time)) / CLOCKS_PER_SEC) * 1000000;


        printf("Signature sent.\n");

        close(client_fd);
        close(server_fd);

        print_metrics(metrics);
        printf("\n\nCPU Cycles: %llu\n", end_cycles-start_cycles);

        getrusage(RUSAGE_SELF, &r_usage);
        printf("Memory: %ld bytes", r_usage.ru_maxrss);
        return 0;
}
