#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "pqcrypto_kem_kyber1024.h"
#include "pqcrypto_sign_dilithium3.h"

#define NUM_AIRCRAFT 5
#define MAX_ALTITUDE_CHANGE 1000
#define MAX_HEADING_CHANGE 15

typedef struct{
        char flightNumber[10];
        int altitude;
        float heading;
        float frequency;
        int squawk;
        int nextCommunication;

        unsigned char pk[pqcrypto_kem_kyber1024_PUBLICKEYBYTES];
        unsigned char sk[pqcrypto_kem_kyber1024_SECRETKEYBYTES];
	unsigned char squawkSignature[pqcrypto_sign_dilithium3_BYTES + sizeof(int)];
}Aircraft;

typedef struct{
	unsigned char signPublicKey[pqcrypto_sign_dilithium3_PUBLICKEYBYTES];
    	unsigned char signSecretKey[pqcrypto_sign_dilithium3_SECRETKEYBYTES];
}ATC;

ATC atc;

Aircraft* createAircraft(int id){
	Aircraft* plane = (Aircraft*) malloc(sizeof(Aircraft));

	if (plane == NULL){
		printf("Failed to allocate memory for aircraft.\n");
        	exit(1);
	}
	sprintf(plane->flightNumber, "Flight %03d", id);
    	plane->altitude = 1000;
    	plane->heading = rand() % 361;
    	plane->frequency = (rand() % 50) + 110.0;
    	plane->squawk = 0; // This will be set later.
    	plane->nextCommunication = rand() % 7;

    	pqcrypto_kem_kyber1024_keypair(plane->pk, plane->sk);

    	return plane;
}



void initATC(){
	pqcrypto_sign_dilithium3_keypair(atc.signPublicKey, atc.signSecretKey);
}


void encryptAndSetSquawk(Aircraft *plane){
        int randomSquawk = rand() % 7778;
	unsigned long long signature_length;

        unsigned char encrypted[pqcrypto_kem_kyber1024_CIPHERTEXTBYTES];
        unsigned char shared_secret_send[pqcrypto_kem_kyber1024_BYTES];
        unsigned char shared_secret_recv[pqcrypto_kem_kyber1024_BYTES];

        pqcrypto_kem_kyber1024_enc(encrypted, shared_secret_send, plane->pk);
        pqcrypto_kem_kyber1024_dec(shared_secret_recv, encrypted, plane->sk);

        if (memcmp(shared_secret_send, shared_secret_recv, pqcrypto_kem_kyber1024_BYTES) == 0) {
                plane->squawk = randomSquawk;
		pqcrypto_sign_dilithium3(plane->squawkSignature, &signature_length, (unsigned char*)&randomSquawk, sizeof(int), atc.signSecretKey);
        } 
        else {
                plane->squawk = 9999;  // Error squawk
        }
}


void updateAircraft(Aircraft *plane, int simulatedMinutes){
        //adjusting altitude
        if(simulatedMinutes <= 10){
                plane -> altitude += 2000;
        }
        else if(simulatedMinutes <= 20){
                plane->altitude += 1000;
        }
        else{
                plane->altitude -= rand() % 500;
        }

        //ensure alt. within bounds:
        if (plane->altitude > 40000) plane->altitude = 40000;
        if (plane->altitude < 1000) plane->altitude = 1000;

        //heading
        plane->heading += (rand() % (2 * MAX_HEADING_CHANGE + 1)) - MAX_HEADING_CHANGE;
        if (plane->heading < 0) plane->heading += 360;
        if (plane->heading >= 360) plane->heading -= 360;

        plane -> nextCommunication += 4 + (rand() % 3);
}


int main(void){
        srand(time(NULL));

        printf("Session Initialisation...");
        //init planes:
        Aircraft* planes[NUM_AIRCRAFT];
        for (int i=0; i<NUM_AIRCRAFT; i++){
                planes[i] = createAircraft(i+1);
                encryptAndSetSquawk(planes[i]);
                printf("ATC generating squawk for Plane %d : %04d\n", i+1, planes[i]->squawk);
        }

        //simulate time:
        for (int simulatedMinutes=0; simulatedMinutes<60; simulatedMinutes++){
                int messagesSent = 0;
                for(int i=0; i<NUM_AIRCRAFT; i++){
                        if(simulatedMinutes == planes[i]->nextCommunication){
				unsigned long long message_length;

				// Ensure squawkSignature and ATC's public key are initialized
                		if(!planes[i]->squawkSignature || !atc.signPublicKey) {
                    			printf("Missing data for Plane %d. Aborting...\n", i + 1);
                    			exit(1);
                		}


				if(pqcrypto_sign_dilithium3_open(NULL, &message_length, planes[i]->squawkSignature, pqcrypto_sign_dilithium3_BYTES + sizeof(int), atc.signPublicKey) !=0){
					printf("Signature verification failed for Plane %d. Aborting...\n", i + 1);
					exit(1);
				}


                                updateAircraft(planes[i], simulatedMinutes);
                                printf("%02d:%02d:00 - Plane %d to ATC: \"%s, altitude is %d feet, heading %.1f degrees on frequency %.1f. Squawk %04d\"\n",
                                                simulatedMinutes/60, simulatedMinutes%60, i+1,
                                                planes[i]->flightNumber, planes[i]->altitude, planes[i]->heading, planes[i]->frequency, planes[i]->squawk);
                                messagesSent++;
                        }
                }
                if(messagesSent == 0){
                        printf("%02d:%02d:00 - \n", simulatedMinutes / 60, simulatedMinutes % 60);
                }

                sleep(2);
        }

	for(int i=0; i<NUM_AIRCRAFT; i++){
		free(planes[i]);
	}

        return 0;
}
