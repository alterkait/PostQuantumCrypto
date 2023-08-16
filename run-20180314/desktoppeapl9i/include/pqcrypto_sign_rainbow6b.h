#ifndef pqcrypto_sign_rainbow6b_H
#define pqcrypto_sign_rainbow6b_H

#define pqcrypto_sign_rainbow6b pqcrypto_sign_rainbow6b_impl
#define pqcrypto_sign_rainbow6b_open pqcrypto_sign_rainbow6b_impl_open
#define pqcrypto_sign_rainbow6b_keypair pqcrypto_sign_rainbow6b_impl_keypair
#define pqcrypto_sign_rainbow6b_BYTES pqcrypto_sign_rainbow6b_impl_BYTES
#define pqcrypto_sign_rainbow6b_PUBLICKEYBYTES pqcrypto_sign_rainbow6b_impl_PUBLICKEYBYTES
#define pqcrypto_sign_rainbow6b_SECRETKEYBYTES pqcrypto_sign_rainbow6b_impl_SECRETKEYBYTES
#define pqcrypto_sign_rainbow6b_DETERMINISTIC pqcrypto_sign_rainbow6b_impl_DETERMINISTIC
#define pqcrypto_sign_rainbow6b_implementation pqcrypto_sign_rainbow6b_impl_implementation
#define pqcrypto_sign_rainbow6b_version pqcrypto_sign_rainbow6b_impl_version
#define pqcrypto_sign_rainbow6b_compiler pqcrypto_sign_rainbow6b_impl_compiler

#define pqcrypto_sign_rainbow6b_impl_BYTES 147
#define pqcrypto_sign_rainbow6b_impl_PUBLICKEYBYTES 1456225
#define pqcrypto_sign_rainbow6b_impl_SECRETKEYBYTES 1016868

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_rainbow6b(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_rainbow6b_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_rainbow6b_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_rainbow6b(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_rainbow6b_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_rainbow6b_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_rainbow6b_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_rainbow6b_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_rainbow6b_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
