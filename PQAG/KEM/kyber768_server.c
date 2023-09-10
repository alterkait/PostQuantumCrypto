#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#include <sys/resource.h>
#include <time.h>

#include "pqcrypto_kem_kyber768.h"

#define PORT 8080

static inline unsigned long long rdtsc(void){
        unsigned hi, lo;
        __asm__ __volatile__ ("rdtsc" : "=a"(lo), "=d"(hi));
        return ((unsigned long long)lo) | (((unsigned long long)hi) << 32);
}

struct performance_metrics{
        double keygen_time;
        double recv_time;
        double decap_time;
};

void print_metrics(struct performance_metrics metrics){
        printf("\n---- Performance Metrics ----\n");
        printf("Time taken for key pair generation: %f microseconds\n", metrics.keygen_time);
        printf("Time taken to receive ciphertext: %f microseconds\n", metrics.recv_time);
        printf("Time taken for decapsulation: %f microseconds\n", metrics.decap_time);
        printf("------------------------------\n");
}

long get_mem_usage(){
        struct rusage usage;
        getrusage(RUSAGE_SELF, &usage);
        return usage.ru_maxrss;
}

unsigned char pk[pqcrypto_kem_kyber768_PUBLICKEYBYTES];
unsigned char sk[pqcrypto_kem_kyber768_SECRETKEYBYTES];
unsigned char ctxt[pqcrypto_kem_kyber768_CIPHERTEXTBYTES];
unsigned char ss[pqcrypto_kem_kyber768_BYTES];

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

        printf("Generating Kyber1024 key pair...\n");
        start_time = clock();
        pqcrypto_kem_kyber768_keypair(pk, sk);
        end_time = clock();
        metrics.keygen_time = (((double) (end_time - start_time)) / CLOCKS_PER_SEC)*1000000;

        printf("Sending public key to client...\n");
        send(client_fd, pk, sizeof(pk), 0);

        printf("Waiting for ciphertext from client...\n");
        start_time = clock();
        recv(client_fd, ctxt, sizeof(ctxt), 0);
        end_time = clock();
        metrics.recv_time = (((double) (end_time - start_time)) / CLOCKS_PER_SEC)*1000000;

        printf("Decapsulating to obtain shared secret...\n");
        start_time = clock();
        start_cycles = rdtsc();
        pqcrypto_kem_kyber768_dec(ss, ctxt, sk);
        end_cycles = rdtsc();

        end_time = clock();
        metrics.decap_time = (((double) (end_time - start_time)) / CLOCKS_PER_SEC)*1000000;


        printf("Shared secret established.\n");

        close(client_fd);
        close(server_fd);

        print_metrics(metrics);
        printf("\n\nCPU Cycles: %llu\n", end_cycles-start_cycles);

        getrusage(RUSAGE_SELF, &r_usage);
        printf("Memory: %ld bytes", r_usage.ru_maxrss);
        return 0;
}
