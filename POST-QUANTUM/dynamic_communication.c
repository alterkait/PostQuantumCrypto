#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <pqcrypto_kem_kyber1024.h>
#include <pqcrypto_sign_dilithium3.h>

//shorter aliases
#define PKBYTES pqcrypto_kem_kyber1024_PUBLICKEYBYTES
#define SKBYTES pqcrypto_kem_kyber1024_SECRETKEYBYTES
#define CTBYTES pqcrypto_kem_kyber1024_CIPHERTEXTBYTES
#define SSBYTES pqcrypto_kem_kyber1024_BYTES

#define MESSAGE_LEN 32
#define PLANES 5

void print_hex(const unsigned char *s, size_t len){
	for (size_t i=0; i<len; i++){
		printf("%02x", s[i]);
	}
}

int main() {
    unsigned char atc_public_key[PKBYTES];
    unsigned char atc_secret_key[SKBYTES];

    unsigned char plane_public_keys[PLANES][PKBYTES];
    unsigned char plane_secret_keys[PLANES][SKBYTES];

    unsigned char plane_sign_public_keys[PLANES][pqcrypto_sign_dilithium3_PUBLICKEYBYTES];
    unsigned char plane_sign_secret_keys[PLANES][pqcrypto_sign_dilithium3_SECRETKEYBYTES];

    unsigned char ciphertext[CTBYTES];
    unsigned char signed_message[pqcrypto_sign_dilithium3_BYTES + MESSAGE_LEN];
    unsigned long long signed_message_len;

    // Initialize RNG
    srand(time(NULL));

    // Generate ATC key pair
    pqcrypto_kem_kyber1024_keypair(atc_public_key, atc_secret_key);

    // Generate key pairs for all planes
    for (int i = 0; i < PLANES; i++) {
        pqcrypto_kem_kyber1024_keypair(plane_public_keys[i], plane_secret_keys[i]);
        pqcrypto_sign_dilithium3_keypair(plane_sign_public_keys[i], plane_sign_secret_keys[i]);
    }

    // Simulation of planes sending encrypted and signed messages to ATC
    for (int i = 0; i < 10; i++) {
        int plane_num = rand() % PLANES;
        char message[MESSAGE_LEN];
        snprintf(message, sizeof(message), "Plane %d reporting!", plane_num);

        unsigned char shared_secret[pqcrypto_kem_kyber1024_BYTES];
        pqcrypto_kem_kyber1024_enc(ciphertext, shared_secret, atc_public_key);

        pqcrypto_sign_dilithium3(signed_message, &signed_message_len, (unsigned char*)message, MESSAGE_LEN, plane_sign_secret_keys[plane_num]);

	printf("Ciphertext from plane %d: ", plane_num);
	print_hex(ciphertext, pqcrypto_kem_kyber1024_CIPHERTEXTBYTES);
	printf("\n");

        unsigned char received_shared_secret[pqcrypto_kem_kyber1024_BYTES];
        pqcrypto_kem_kyber1024_dec(received_shared_secret, ciphertext, atc_secret_key);

        unsigned char unsigned_message[MESSAGE_LEN];
        unsigned long long unsigned_message_len;

        if (pqcrypto_sign_dilithium3_open(unsigned_message, &unsigned_message_len, signed_message, signed_message_len, plane_sign_public_keys[plane_num]) != 0) {
            fprintf(stderr, "Signature verification failed for plane %d\n", plane_num);
            exit(EXIT_FAILURE);
        }

        printf("Received message from Plane %d: %s\n", plane_num, unsigned_message);
    }

    return 0;
}

