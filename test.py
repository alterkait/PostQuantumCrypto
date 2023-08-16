from secrets import compare_digest
from pqcrypto.kem.ntruhrss701 import generate_keypair, encrypt, decrypt

def main():
    # Generate a keypair
    public_key, secret_key = generate_keypair()
    print("Public Key:", public_key)
    print("Secret Key:", secret_key)

    # Encrypt a test message
    ciphertext, shared_secret_sender = encrypt(public_key)
    print("Ciphertext:", ciphertext)
    print("Shared Secret (Sender):", shared_secret_sender)

    # Decrypt the ciphertext
    shared_secret_receiver = decrypt(ciphertext, secret_key)
    print("Shared Secret (Receiver):", shared_secret_receiver)

    # Check if the shared secrets match
    if shared_secret_sender == shared_secret_receiver:
        print("Encryption and decryption successful!")
    else:
        print("Error: shared secrets do not match.")

if __name__ == "__main__":
    main()

