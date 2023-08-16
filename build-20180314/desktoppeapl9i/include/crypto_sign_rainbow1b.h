#ifndef crypto_sign_rainbow1b_H
#define crypto_sign_rainbow1b_H

#define crypto_sign_rainbow1b pqcrypto_sign_rainbow1b_impl
#define crypto_sign_rainbow1b_open pqcrypto_sign_rainbow1b_impl_open
#define crypto_sign_rainbow1b_keypair pqcrypto_sign_rainbow1b_impl_keypair
#define crypto_sign_rainbow1b_BYTES pqcrypto_sign_rainbow1b_impl_BYTES
#define crypto_sign_rainbow1b_PUBLICKEYBYTES pqcrypto_sign_rainbow1b_impl_PUBLICKEYBYTES
#define crypto_sign_rainbow1b_SECRETKEYBYTES pqcrypto_sign_rainbow1b_impl_SECRETKEYBYTES
#define crypto_sign_rainbow1b_DETERMINISTIC pqcrypto_sign_rainbow1b_impl_DETERMINISTIC
#define crypto_sign_rainbow1b_implementation pqcrypto_sign_rainbow1b_impl_implementation
#define crypto_sign_rainbow1b_version pqcrypto_sign_rainbow1b_impl_version
#define crypto_sign_rainbow1b_compiler pqcrypto_sign_rainbow1b_impl_compiler

#define pqcrypto_sign_rainbow1b_impl_BYTES 78
#define pqcrypto_sign_rainbow1b_impl_PUBLICKEYBYTES 163185
#define pqcrypto_sign_rainbow1b_impl_SECRETKEYBYTES 114308

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_rainbow1b(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_rainbow1b_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_rainbow1b_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_rainbow1b(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_rainbow1b_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_rainbow1b_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_rainbow1b_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_rainbow1b_version[] __attribute__((visibility("default")));
extern const char crypto_sign_rainbow1b_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
