#ifndef crypto_sign_dilithium4_H
#define crypto_sign_dilithium4_H

#define crypto_sign_dilithium4 pqcrypto_sign_dilithium4_impl
#define crypto_sign_dilithium4_open pqcrypto_sign_dilithium4_impl_open
#define crypto_sign_dilithium4_keypair pqcrypto_sign_dilithium4_impl_keypair
#define crypto_sign_dilithium4_BYTES pqcrypto_sign_dilithium4_impl_BYTES
#define crypto_sign_dilithium4_PUBLICKEYBYTES pqcrypto_sign_dilithium4_impl_PUBLICKEYBYTES
#define crypto_sign_dilithium4_SECRETKEYBYTES pqcrypto_sign_dilithium4_impl_SECRETKEYBYTES
#define crypto_sign_dilithium4_DETERMINISTIC pqcrypto_sign_dilithium4_impl_DETERMINISTIC
#define crypto_sign_dilithium4_implementation pqcrypto_sign_dilithium4_impl_implementation
#define crypto_sign_dilithium4_version pqcrypto_sign_dilithium4_impl_version
#define crypto_sign_dilithium4_compiler pqcrypto_sign_dilithium4_impl_compiler

#define pqcrypto_sign_dilithium4_impl_BYTES 3366
#define pqcrypto_sign_dilithium4_impl_PUBLICKEYBYTES 1760
#define pqcrypto_sign_dilithium4_impl_SECRETKEYBYTES 3856
#define pqcrypto_sign_dilithium4_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_dilithium4(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_dilithium4_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_dilithium4_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_dilithium4(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_dilithium4_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_dilithium4_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_dilithium4_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_dilithium4_version[] __attribute__((visibility("default")));
extern const char crypto_sign_dilithium4_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
