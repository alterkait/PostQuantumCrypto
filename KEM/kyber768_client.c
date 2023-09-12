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
	double enc_time;
	double send_time;
};

void print_metrics(struct performance_metrics metrics){
	printf("\n------ Performance Metric ------\n");
	printf("Enc: %f microseconds\n", metrics.enc_time);
	printf("Transmission Overhead: %f microseconds\n", metrics.send_time);
	printf("----------------------------------\n");
}


unsigned char pk[pqcrypto_kem_kyber768_PUBLICKEYBYTES];
unsigned char ctxt[pqcrypto_kem_kyber768_CIPHERTEXTBYTES];
unsigned char ss[pqcrypto_kem_kyber768_BYTES];

int main(){
	int client_fd;
	struct sockaddr_in server_address;
	
	struct performance_metrics metrics;
	clock_t start_time, end_time;

	struct rusage r_usage;
	unsigned long long start_cycles, end_cycles;

	printf("Initialising client socket...\n");
	client_fd = socket(AF_INET, SOCK_STREAM, 0);
	server_address.sin_family = AF_INET;
	server_address.sin_addr.s_addr = inet_addr("192.168.1.64");
	server_address.sin_port = htons(PORT);

	connect(client_fd, (struct sockaddr *)&server_address, sizeof(server_address));

	printf("Waiting for client's PK...\n");
	recv(client_fd, pk, sizeof(pk),0);

	printf("Encapsulating ss into ciphertext...\n");
	start_time = clock();
	pqcrypto_kem_kyber768_enc(ctxt, ss, pk);
	end_time = clock();
	metrics.enc_time = (((double) (end_time - start_time)) / CLOCKS_PER_SEC) * 1000000;


	printf("Sending ciphertext to Server...\n");
	start_time = clock();
	send(client_fd, ctxt, sizeof(ctxt), 0);
	end_time = clock();
	metrics.send_time = (((double) (end_time - start_time)) / CLOCKS_PER_SEC) * 1000000;

	printf("Shared secret established");

	close(client_fd);
	print_metrics(metrics);
	
	printf("\n\nCPU Cycles: %llu\n", end_cycles-start_cycles);	
	getrusage(RUSAGE_SELF, &r_usage);
	printf("Memory: %ld bytes", r_usage.ru_maxrss);

	return 0;
}
