#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>

#define PORT 8080

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[4096] = {0};

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("Socket creation error");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Use Raspberry Pi's IP address here
    if (inet_pton(AF_INET, "192.168.1.170", &serv_addr.sin_addr) <= 0) {
        perror("Invalid address / Address not supported");
        return -1;
    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Connection failed");
        return -1;
    }

    // Generating RSA key pair
    RSA *keypair = RSA_generate_key(2048, RSA_F4, NULL, NULL);
    BIO *bio = BIO_new(BIO_s_mem());
    PEM_write_bio_RSAPublicKey(bio, keypair);

    int keylen = BIO_pending(bio);
    char *pem_key = malloc(keylen + 1);
    BIO_read(bio, pem_key, keylen);
    pem_key[keylen] = '\0';

    // Sending the public key to the server
    send(sock, pem_key, keylen, 0);
    printf("Public key sent.\n");

    // Receiving the encrypted message
    int bytes_received = read(sock, buffer, sizeof(buffer));
    if (bytes_received < 0) {
        perror("Failed to receive data");
        return -1;
    }

    // Decrypting the message
    char decrypted[4096] = {0};
    RSA_private_decrypt(bytes_received, (unsigned char*) buffer, (unsigned char*) decrypted, keypair, RSA_PKCS1_PADDING);
    printf("Decrypted message: %s\n", decrypted);

    close(sock);
    BIO_free_all(bio);
    RSA_free(keypair);
    free(pem_key);
    return 0;
}

