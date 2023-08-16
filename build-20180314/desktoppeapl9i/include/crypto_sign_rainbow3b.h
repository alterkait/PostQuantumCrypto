#ifndef crypto_sign_rainbow3b_H
#define crypto_sign_rainbow3b_H

#define crypto_sign_rainbow3b pqcrypto_sign_rainbow3b_impl
#define crypto_sign_rainbow3b_open pqcrypto_sign_rainbow3b_impl_open
#define crypto_sign_rainbow3b_keypair pqcrypto_sign_rainbow3b_impl_keypair
#define crypto_sign_rainbow3b_BYTES pqcrypto_sign_rainbow3b_impl_BYTES
#define crypto_sign_rainbow3b_PUBLICKEYBYTES pqcrypto_sign_rainbow3b_impl_PUBLICKEYBYTES
#define crypto_sign_rainbow3b_SECRETKEYBYTES pqcrypto_sign_rainbow3b_impl_SECRETKEYBYTES
#define crypto_sign_rainbow3b_DETERMINISTIC pqcrypto_sign_rainbow3b_impl_DETERMINISTIC
#define crypto_sign_rainbow3b_implementation pqcrypto_sign_rainbow3b_impl_implementation
#define crypto_sign_rainbow3b_version pqcrypto_sign_rainbow3b_impl_version
#define crypto_sign_rainbow3b_compiler pqcrypto_sign_rainbow3b_impl_compiler

#define pqcrypto_sign_rainbow3b_impl_BYTES 112
#define pqcrypto_sign_rainbow3b_impl_PUBLICKEYBYTES 564535
#define pqcrypto_sign_rainbow3b_impl_SECRETKEYBYTES 409463

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_rainbow3b(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_rainbow3b_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_rainbow3b_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_rainbow3b(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_rainbow3b_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_rainbow3b_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_rainbow3b_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_rainbow3b_version[] __attribute__((visibility("default")));
extern const char crypto_sign_rainbow3b_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
