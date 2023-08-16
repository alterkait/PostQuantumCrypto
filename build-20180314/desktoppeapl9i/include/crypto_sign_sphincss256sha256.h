#ifndef crypto_sign_sphincss256sha256_H
#define crypto_sign_sphincss256sha256_H

#define crypto_sign_sphincss256sha256 pqcrypto_sign_sphincss256sha256_impl
#define crypto_sign_sphincss256sha256_open pqcrypto_sign_sphincss256sha256_impl_open
#define crypto_sign_sphincss256sha256_keypair pqcrypto_sign_sphincss256sha256_impl_keypair
#define crypto_sign_sphincss256sha256_BYTES pqcrypto_sign_sphincss256sha256_impl_BYTES
#define crypto_sign_sphincss256sha256_PUBLICKEYBYTES pqcrypto_sign_sphincss256sha256_impl_PUBLICKEYBYTES
#define crypto_sign_sphincss256sha256_SECRETKEYBYTES pqcrypto_sign_sphincss256sha256_impl_SECRETKEYBYTES
#define crypto_sign_sphincss256sha256_DETERMINISTIC pqcrypto_sign_sphincss256sha256_impl_DETERMINISTIC
#define crypto_sign_sphincss256sha256_implementation pqcrypto_sign_sphincss256sha256_impl_implementation
#define crypto_sign_sphincss256sha256_version pqcrypto_sign_sphincss256sha256_impl_version
#define crypto_sign_sphincss256sha256_compiler pqcrypto_sign_sphincss256sha256_impl_compiler

#define pqcrypto_sign_sphincss256sha256_impl_BYTES 29792
#define pqcrypto_sign_sphincss256sha256_impl_PUBLICKEYBYTES 64
#define pqcrypto_sign_sphincss256sha256_impl_SECRETKEYBYTES 128

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_sphincss256sha256(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_sphincss256sha256_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_sphincss256sha256_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_sphincss256sha256(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_sphincss256sha256_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_sphincss256sha256_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_sphincss256sha256_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_sphincss256sha256_version[] __attribute__((visibility("default")));
extern const char crypto_sign_sphincss256sha256_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
