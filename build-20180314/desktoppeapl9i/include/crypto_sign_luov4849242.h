#ifndef crypto_sign_luov4849242_H
#define crypto_sign_luov4849242_H

#define crypto_sign_luov4849242 pqcrypto_sign_luov4849242_impl
#define crypto_sign_luov4849242_open pqcrypto_sign_luov4849242_impl_open
#define crypto_sign_luov4849242_keypair pqcrypto_sign_luov4849242_impl_keypair
#define crypto_sign_luov4849242_BYTES pqcrypto_sign_luov4849242_impl_BYTES
#define crypto_sign_luov4849242_PUBLICKEYBYTES pqcrypto_sign_luov4849242_impl_PUBLICKEYBYTES
#define crypto_sign_luov4849242_SECRETKEYBYTES pqcrypto_sign_luov4849242_impl_SECRETKEYBYTES
#define crypto_sign_luov4849242_DETERMINISTIC pqcrypto_sign_luov4849242_impl_DETERMINISTIC
#define crypto_sign_luov4849242_implementation pqcrypto_sign_luov4849242_impl_implementation
#define crypto_sign_luov4849242_version pqcrypto_sign_luov4849242_impl_version
#define crypto_sign_luov4849242_compiler pqcrypto_sign_luov4849242_impl_compiler

#define pqcrypto_sign_luov4849242_impl_BYTES 1746
#define pqcrypto_sign_luov4849242_impl_PUBLICKEYBYTES 7536
#define pqcrypto_sign_luov4849242_impl_SECRETKEYBYTES 32
#define pqcrypto_sign_luov4849242_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_luov4849242(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_luov4849242_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_luov4849242_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_luov4849242(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_luov4849242_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_luov4849242_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_luov4849242_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_luov4849242_version[] __attribute__((visibility("default")));
extern const char crypto_sign_luov4849242_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
