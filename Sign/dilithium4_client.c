#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#include <sys/resource.h>
#include <time.h>

#include "pqcrypto_sign_dilithium4.h"

#define PORT 8080

struct performance_metrics{
	double recv_time;
	double verify_time;
};

void print_metrics(struct performance_metrics metrics){
	printf("\n------ Performance Metrics -----\n");
	printf("Transmission Overhead: %f microsenconds\n", metrics.recv_time);
	printf("Time taken to Verify message: %f microseconds\n", metrics.verify_time);
	printf("----------------------------------\n");
}

unsigned char pk[pqcrypto_sign_dilithium4_PUBLICKEYBYTES];
unsigned char *signed_message;
size_t signed_message_len;

int main(){
	int client_fd;
	struct sockaddr_in server_address;

	struct performance_metrics metrics;
	clock_t start_time, end_time;

	struct rusage r_usage;

	printf("Initialising client socket...\n");
	client_fd = socket(AF_INET, SOCK_STREAM, 0);
	server_address.sin_family = AF_INET;
	server_address.sin_addr.s_addr = inet_addr("192.168.1.64");
	server_address.sin_port = htons(PORT);

	connect(client_fd, (struct sockaddr *)&server_address, sizeof(server_address));

	printf("Receiving PK...\n");
	recv(client_fd, pk, sizeof(pk), 0);

	printf("Waiting for signed message size...\n");
	start_time = clock();
	recv(client_fd, &signed_message_len, sizeof(size_t), 0);
	
	signed_message = malloc(signed_message_len);
	if(signed_message == NULL){
		printf("Memory allocation fail");
		return 1;
	}

	printf("Waiting for message...\n");
	recv(client_fd, signed_message, signed_message_len, 0);
		

	end_time = clock();
	metrics.recv_time = (((double) (end_time - start_time)) / CLOCKS_PER_SEC) * 1000000;

	printf("Verifying signature...\n");
	start_time = clock();
	if(pqcrypto_sign_dilithium4_open(signed_message, &signed_message_len, signed_message, signed_message_len, pk) != 0){
		printf("Verification failed\n");
	}else{
		printf("Verification successfull\n Message: %s\n", signed_message);
	}

	close(client_fd);

	free(signed_message);

	print_metrics(metrics);

	getrusage(RUSAGE_SELF, &r_usage);
	printf("Memory: %ld bytes", r_usage.ru_maxrss);

	return 0;
}
