#ifndef pqcrypto_sign_rainbow3c_H
#define pqcrypto_sign_rainbow3c_H

#define pqcrypto_sign_rainbow3c pqcrypto_sign_rainbow3c_impl
#define pqcrypto_sign_rainbow3c_open pqcrypto_sign_rainbow3c_impl_open
#define pqcrypto_sign_rainbow3c_keypair pqcrypto_sign_rainbow3c_impl_keypair
#define pqcrypto_sign_rainbow3c_BYTES pqcrypto_sign_rainbow3c_impl_BYTES
#define pqcrypto_sign_rainbow3c_PUBLICKEYBYTES pqcrypto_sign_rainbow3c_impl_PUBLICKEYBYTES
#define pqcrypto_sign_rainbow3c_SECRETKEYBYTES pqcrypto_sign_rainbow3c_impl_SECRETKEYBYTES
#define pqcrypto_sign_rainbow3c_DETERMINISTIC pqcrypto_sign_rainbow3c_impl_DETERMINISTIC
#define pqcrypto_sign_rainbow3c_implementation pqcrypto_sign_rainbow3c_impl_implementation
#define pqcrypto_sign_rainbow3c_version pqcrypto_sign_rainbow3c_impl_version
#define pqcrypto_sign_rainbow3c_compiler pqcrypto_sign_rainbow3c_impl_compiler

#define pqcrypto_sign_rainbow3c_impl_BYTES 156
#define pqcrypto_sign_rainbow3c_impl_PUBLICKEYBYTES 720793
#define pqcrypto_sign_rainbow3c_impl_SECRETKEYBYTES 537781

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_rainbow3c(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_rainbow3c_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_rainbow3c_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_rainbow3c(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_rainbow3c_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_rainbow3c_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_rainbow3c_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_rainbow3c_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_rainbow3c_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
