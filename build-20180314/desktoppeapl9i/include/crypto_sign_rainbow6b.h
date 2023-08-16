#ifndef crypto_sign_rainbow6b_H
#define crypto_sign_rainbow6b_H

#define crypto_sign_rainbow6b pqcrypto_sign_rainbow6b_impl
#define crypto_sign_rainbow6b_open pqcrypto_sign_rainbow6b_impl_open
#define crypto_sign_rainbow6b_keypair pqcrypto_sign_rainbow6b_impl_keypair
#define crypto_sign_rainbow6b_BYTES pqcrypto_sign_rainbow6b_impl_BYTES
#define crypto_sign_rainbow6b_PUBLICKEYBYTES pqcrypto_sign_rainbow6b_impl_PUBLICKEYBYTES
#define crypto_sign_rainbow6b_SECRETKEYBYTES pqcrypto_sign_rainbow6b_impl_SECRETKEYBYTES
#define crypto_sign_rainbow6b_DETERMINISTIC pqcrypto_sign_rainbow6b_impl_DETERMINISTIC
#define crypto_sign_rainbow6b_implementation pqcrypto_sign_rainbow6b_impl_implementation
#define crypto_sign_rainbow6b_version pqcrypto_sign_rainbow6b_impl_version
#define crypto_sign_rainbow6b_compiler pqcrypto_sign_rainbow6b_impl_compiler

#define pqcrypto_sign_rainbow6b_impl_BYTES 147
#define pqcrypto_sign_rainbow6b_impl_PUBLICKEYBYTES 1456225
#define pqcrypto_sign_rainbow6b_impl_SECRETKEYBYTES 1016868

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_rainbow6b(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_rainbow6b_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_rainbow6b_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_rainbow6b(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_rainbow6b_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_rainbow6b_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_rainbow6b_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_rainbow6b_version[] __attribute__((visibility("default")));
extern const char crypto_sign_rainbow6b_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
