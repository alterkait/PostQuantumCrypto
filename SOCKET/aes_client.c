#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <openssl/aes.h>
#include <openssl/rand.h>

#define PORT 8080

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("Socket creation error");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
    if (inet_pton(AF_INET, "192.168.1.170", &serv_addr.sin_addr) <= 0) {  // Replace with your Raspberry Pi's IP address
        perror("Invalid address / Address not supported");
        return -1;
    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Connection failed");
        return -1;
    }

    unsigned char key[16] = "0123456789abcdef";  // AES 128-bit key
    unsigned char iv[AES_BLOCK_SIZE];
    AES_KEY encrypt_key;

    // Prepare the AES key for encryption
    AES_set_encrypt_key(key, 128, &encrypt_key);

    char *messages[1] = {
        "Hello!"
        //"How are you?",
        //"Goodbye!"
    };

    for (int i = 0; i < 1; i++) {
        // Generate a new random IV for each message
        RAND_bytes(iv, AES_BLOCK_SIZE);

        // Encrypt the message
        unsigned char encrypted[AES_BLOCK_SIZE];
        AES_cbc_encrypt((unsigned char*) messages[i], encrypted, AES_BLOCK_SIZE, &encrypt_key, iv, AES_ENCRYPT);

        // Send the encrypted message
        send(sock, encrypted, AES_BLOCK_SIZE, 0);
        printf("Sent message: %s\n", messages[i]);
    }

    close(sock);
    return 0;
}

