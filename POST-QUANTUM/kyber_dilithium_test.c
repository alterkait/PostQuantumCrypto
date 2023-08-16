#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pqcrypto_kem_kyber768.h"
#include "pqcrypto_sign_dilithium3.h"


int main(){
	// Allocate memory dynamically for key/message space:
	unsigned char *pk = malloc(pqcrypto_kem_kyber768_PUBLICKEYBYTES);
    	unsigned char *sk = malloc(pqcrypto_kem_kyber768_SECRETKEYBYTES);
    	unsigned char *ciphertext = malloc(pqcrypto_kem_kyber768_CIPHERTEXTBYTES);
    	unsigned char *shared_secret_send = malloc(pqcrypto_kem_kyber768_BYTES);
    	unsigned char *shared_secret_recv = malloc(pqcrypto_kem_kyber768_BYTES);

    	if(!pk || !sk || !ciphertext || !shared_secret_send || !shared_secret_recv){
		fprintf(stderr, "Memory allocation failure.\n");
		return -1;
	}

	
	//key generation
	if (pqcrypto_kem_kyber768_keypair(pk, sk) != 0) {
        	fprintf(stderr, "Error during key generation.\n");
        	return -1;
    	}
	printf("1. key generation\n");

    	// Encryption and shared secret generation (sender side)
    	if (pqcrypto_kem_kyber768_enc(ciphertext, shared_secret_send, pk) != 0) {
        	fprintf(stderr, "Error during encryption.\n");
        	return -1;
    	}
	printf("2. Alice encrypts and generates shared secret key\n");

    	// Decryption and shared secret generation (receiver side)
    	if (pqcrypto_kem_kyber768_dec(shared_secret_recv, ciphertext, sk) != 0) {
        	fprintf(stderr, "Error during decryption.\n");
        	return -1;
    	}
	printf("3. Bob decrypts and generates shared secret key\n");

    	// Comparing the shared secrets
    	if (memcmp(shared_secret_send, shared_secret_recv, pqcrypto_kem_kyber768_BYTES) != 0) {
        	fprintf(stderr, "Shared secrets do not match.\n");
        	return -1;
    	}

    	printf("Shared secrets match. Post-Quantum KEM test passed.\n");
    		
    	//cleanup
	free(pk);
	free(sk);
	free(ciphertext);
	free(shared_secret_send);
	free(shared_secret_recv);

    	return 0;
}
