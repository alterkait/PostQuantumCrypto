#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pqcrypto_kem_ntruhrss701.h"


int main(){
	unsigned char pk[pqcrypto_kem_ntruhrss701_PUBLICKEYBYTES];
	unsigned char sk[pqcrypto_kem_ntruhrss701_SECRETKEYBYTES];
	unsigned char c[pqcrypto_kem_ntruhrss701_CIPHERTEXTBYTES];
	unsigned char k1[pqcrypto_kem_ntruhrss701_BYTES], k2[pqcrypto_kem_ntruhrss701_BYTES];

	//KEYPAIR GENERATION
	if (pqcrypto_kem_ntruhrss701_keypair(pk,sk)){
 		fprintf(stderr, "Error Generating keypair\n");
		return 1;		
	}
	printf("Generated keypair successfully\n");

	//Test with several plaintext:
	const char* plaintexts[] = {"hello", "world", "post", "quantum", "cryptography"};
	size_t num_texts = sizeof(plaintexts) / sizeof(plaintexts[0]);

	for(size_t i = 0; i<num_texts; i++){
		const char* current_plaintext = plaintexts[i];
		printf("\nProcessing Plaintext: %s\n", current_plaintext);

		//Encryption
		if(pqcrypto_kem_ntruhrss701_enc(c,k1,pk)){
			fprintf(stderr, "Error encrypting plaintext.\n");
            		return 1;
		}
		printf("Successfully Encrypted - Obtained ciphertext\n");

		// Decryption
        	if (pqcrypto_kem_ntruhrss701_dec(k2, c, sk)) {
            		fprintf(stderr, "Error decrypting ciphertext.\n");
            		return 1;
        	}
        	printf("Decrypted successfully to obtain original key.\n");

		// Compare
		if (memcmp(k1, k2, pqcrypto_kem_ntruhrss701_BYTES) == 0) {
            		printf("Keys match for plaintext %s!\n", current_plaintext);
        	}
	       	else {
            		printf("Keys mismatch for plaintext %s.\n", current_plaintext);
        	}
	}

	return 0;
}
