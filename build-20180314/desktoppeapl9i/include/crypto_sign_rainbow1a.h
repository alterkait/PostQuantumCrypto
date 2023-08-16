#ifndef crypto_sign_rainbow1a_H
#define crypto_sign_rainbow1a_H

#define crypto_sign_rainbow1a pqcrypto_sign_rainbow1a_impl
#define crypto_sign_rainbow1a_open pqcrypto_sign_rainbow1a_impl_open
#define crypto_sign_rainbow1a_keypair pqcrypto_sign_rainbow1a_impl_keypair
#define crypto_sign_rainbow1a_BYTES pqcrypto_sign_rainbow1a_impl_BYTES
#define crypto_sign_rainbow1a_PUBLICKEYBYTES pqcrypto_sign_rainbow1a_impl_PUBLICKEYBYTES
#define crypto_sign_rainbow1a_SECRETKEYBYTES pqcrypto_sign_rainbow1a_impl_SECRETKEYBYTES
#define crypto_sign_rainbow1a_DETERMINISTIC pqcrypto_sign_rainbow1a_impl_DETERMINISTIC
#define crypto_sign_rainbow1a_implementation pqcrypto_sign_rainbow1a_impl_implementation
#define crypto_sign_rainbow1a_version pqcrypto_sign_rainbow1a_impl_version
#define crypto_sign_rainbow1a_compiler pqcrypto_sign_rainbow1a_impl_compiler

#define pqcrypto_sign_rainbow1a_impl_BYTES 64
#define pqcrypto_sign_rainbow1a_impl_PUBLICKEYBYTES 152097
#define pqcrypto_sign_rainbow1a_impl_SECRETKEYBYTES 100209

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_rainbow1a(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_rainbow1a_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_rainbow1a_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_rainbow1a(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_rainbow1a_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_rainbow1a_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_rainbow1a_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_rainbow1a_version[] __attribute__((visibility("default")));
extern const char crypto_sign_rainbow1a_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
