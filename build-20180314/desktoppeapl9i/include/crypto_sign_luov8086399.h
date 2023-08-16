#ifndef crypto_sign_luov8086399_H
#define crypto_sign_luov8086399_H

#define crypto_sign_luov8086399 pqcrypto_sign_luov8086399_impl
#define crypto_sign_luov8086399_open pqcrypto_sign_luov8086399_impl_open
#define crypto_sign_luov8086399_keypair pqcrypto_sign_luov8086399_impl_keypair
#define crypto_sign_luov8086399_BYTES pqcrypto_sign_luov8086399_impl_BYTES
#define crypto_sign_luov8086399_PUBLICKEYBYTES pqcrypto_sign_luov8086399_impl_PUBLICKEYBYTES
#define crypto_sign_luov8086399_SECRETKEYBYTES pqcrypto_sign_luov8086399_impl_SECRETKEYBYTES
#define crypto_sign_luov8086399_DETERMINISTIC pqcrypto_sign_luov8086399_impl_DETERMINISTIC
#define crypto_sign_luov8086399_implementation pqcrypto_sign_luov8086399_impl_implementation
#define crypto_sign_luov8086399_version pqcrypto_sign_luov8086399_impl_version
#define crypto_sign_luov8086399_compiler pqcrypto_sign_luov8086399_impl_compiler

#define pqcrypto_sign_luov8086399_impl_BYTES 4850
#define pqcrypto_sign_luov8086399_impl_PUBLICKEYBYTES 40248
#define pqcrypto_sign_luov8086399_impl_SECRETKEYBYTES 32
#define pqcrypto_sign_luov8086399_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_luov8086399(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_luov8086399_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_luov8086399_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_luov8086399(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_luov8086399_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_luov8086399_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_luov8086399_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_luov8086399_version[] __attribute__((visibility("default")));
extern const char crypto_sign_luov8086399_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
