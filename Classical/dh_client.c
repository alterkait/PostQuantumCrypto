#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <openssl/dh.h>

#define PORT 8080

int main(){
	struct sockaddr_in address;
	int sock = 0;
	int addrlen = sizeof(address);
	DH *dh = DH_new();
	BIGNUM *pk, *sk, *server_pk, *ss;
	int secret_size;

	sock = socket(AF_INET, SOCK_STREAM, 0);
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = inet_addr("192.168.1.64");
	address.sin_port = htons(PORT);

	connect(sock, (struct sockaddr *)&address, sizeof(address));

	DH_generate_parameters_ex(dh, 256, DH_GENERATOR_2, NULL);
	DH_generate_key(dh);
	pk = DH_get0_pub_key(dh);

	char server_pk_hex[256];
	recv(sock, server_pk_hex, 256, 0);
	server_pk = BN_new();
	BN_hex2bn(&server_pk, server_pk_hex);

	send(sock, BN_bn2hex(pk), BN_num_bytes(pk), 0);

	ss = BN_new();
	secret_size = DH_compute_key(BN_bn2hex(ss), server_pk, dh);

	close(sock);
	DH_free(dh);

	return 0;
}
