#ifndef crypto_sign_dilithium3_H
#define crypto_sign_dilithium3_H

#define crypto_sign_dilithium3 pqcrypto_sign_dilithium3_impl
#define crypto_sign_dilithium3_open pqcrypto_sign_dilithium3_impl_open
#define crypto_sign_dilithium3_keypair pqcrypto_sign_dilithium3_impl_keypair
#define crypto_sign_dilithium3_BYTES pqcrypto_sign_dilithium3_impl_BYTES
#define crypto_sign_dilithium3_PUBLICKEYBYTES pqcrypto_sign_dilithium3_impl_PUBLICKEYBYTES
#define crypto_sign_dilithium3_SECRETKEYBYTES pqcrypto_sign_dilithium3_impl_SECRETKEYBYTES
#define crypto_sign_dilithium3_DETERMINISTIC pqcrypto_sign_dilithium3_impl_DETERMINISTIC
#define crypto_sign_dilithium3_implementation pqcrypto_sign_dilithium3_impl_implementation
#define crypto_sign_dilithium3_version pqcrypto_sign_dilithium3_impl_version
#define crypto_sign_dilithium3_compiler pqcrypto_sign_dilithium3_impl_compiler

#define pqcrypto_sign_dilithium3_impl_BYTES 2701
#define pqcrypto_sign_dilithium3_impl_PUBLICKEYBYTES 1472
#define pqcrypto_sign_dilithium3_impl_SECRETKEYBYTES 3504
#define pqcrypto_sign_dilithium3_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_dilithium3(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_dilithium3_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_dilithium3_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_dilithium3(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_dilithium3_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_dilithium3_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_dilithium3_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_dilithium3_version[] __attribute__((visibility("default")));
extern const char crypto_sign_dilithium3_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
