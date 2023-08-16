#ifndef pqcrypto_sign_dilithium4_H
#define pqcrypto_sign_dilithium4_H

#define pqcrypto_sign_dilithium4 pqcrypto_sign_dilithium4_impl
#define pqcrypto_sign_dilithium4_open pqcrypto_sign_dilithium4_impl_open
#define pqcrypto_sign_dilithium4_keypair pqcrypto_sign_dilithium4_impl_keypair
#define pqcrypto_sign_dilithium4_BYTES pqcrypto_sign_dilithium4_impl_BYTES
#define pqcrypto_sign_dilithium4_PUBLICKEYBYTES pqcrypto_sign_dilithium4_impl_PUBLICKEYBYTES
#define pqcrypto_sign_dilithium4_SECRETKEYBYTES pqcrypto_sign_dilithium4_impl_SECRETKEYBYTES
#define pqcrypto_sign_dilithium4_DETERMINISTIC pqcrypto_sign_dilithium4_impl_DETERMINISTIC
#define pqcrypto_sign_dilithium4_implementation pqcrypto_sign_dilithium4_impl_implementation
#define pqcrypto_sign_dilithium4_version pqcrypto_sign_dilithium4_impl_version
#define pqcrypto_sign_dilithium4_compiler pqcrypto_sign_dilithium4_impl_compiler

#define pqcrypto_sign_dilithium4_impl_BYTES 3366
#define pqcrypto_sign_dilithium4_impl_PUBLICKEYBYTES 1760
#define pqcrypto_sign_dilithium4_impl_SECRETKEYBYTES 3856
#define pqcrypto_sign_dilithium4_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_dilithium4(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_dilithium4_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_dilithium4_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_dilithium4(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_dilithium4_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_dilithium4_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_dilithium4_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_dilithium4_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_dilithium4_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
