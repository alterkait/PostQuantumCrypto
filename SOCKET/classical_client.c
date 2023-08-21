#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <openssl/aes.h>

#define PORT 8080

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    unsigned char message[] = "Hello from the Raspberry Pi!";
    unsigned char encrypted[1024] = {0};
    unsigned char key[28] = "secret_key_here"; // 128 bits
    AES_KEY encryptKey;

    AES_set_encrypt_key(key, 128, &encryptKey);
    AES_encrypt(message, encrypted, &encryptKey);

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("Socket creation error");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Use PC's IP address here
    if(inet_pton(AF_INET, "192.168.1.170", &serv_addr.sin_addr) <= 0) {
        perror("Invalid address / Address not supported");
        return -1;
    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Connection failed");
        return -1;
    }

    send(sock, encrypted, sizeof(encrypted), 0);
    printf("Encrypted message sent.\n");
    close(sock);
    return 0;
}

