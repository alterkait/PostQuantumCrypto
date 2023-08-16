#ifndef pqcrypto_kem_frodokem640_H
#define pqcrypto_kem_frodokem640_H

#define pqcrypto_kem_frodokem640_keypair pqcrypto_kem_frodokem640_impl_keypair
#define pqcrypto_kem_frodokem640_enc pqcrypto_kem_frodokem640_impl_enc
#define pqcrypto_kem_frodokem640_dec pqcrypto_kem_frodokem640_impl_dec
#define pqcrypto_kem_frodokem640_PUBLICKEYBYTES pqcrypto_kem_frodokem640_impl_PUBLICKEYBYTES
#define pqcrypto_kem_frodokem640_SECRETKEYBYTES pqcrypto_kem_frodokem640_impl_SECRETKEYBYTES
#define pqcrypto_kem_frodokem640_BYTES pqcrypto_kem_frodokem640_impl_BYTES
#define pqcrypto_kem_frodokem640_CIPHERTEXTBYTES pqcrypto_kem_frodokem640_impl_CIPHERTEXTBYTES
#define pqcrypto_kem_frodokem640_implementation pqcrypto_kem_frodokem640_impl_implementation
#define pqcrypto_kem_frodokem640_version pqcrypto_kem_frodokem640_impl_version
#define pqcrypto_kem_frodokem640_compiler pqcrypto_kem_frodokem640_impl_compiler

#define pqcrypto_kem_frodokem640_impl_PUBLICKEYBYTES 9616
#define pqcrypto_kem_frodokem640_impl_SECRETKEYBYTES 19872
#define pqcrypto_kem_frodokem640_impl_BYTES 16
#define pqcrypto_kem_frodokem640_impl_CIPHERTEXTBYTES 9736

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int pqcrypto_kem_frodokem640_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_frodokem640_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_frodokem640_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_kem_frodokem640_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_frodokem640_version[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_frodokem640_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
