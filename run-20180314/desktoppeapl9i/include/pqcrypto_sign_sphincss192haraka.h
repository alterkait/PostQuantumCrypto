#ifndef pqcrypto_sign_sphincss192haraka_H
#define pqcrypto_sign_sphincss192haraka_H

#define pqcrypto_sign_sphincss192haraka pqcrypto_sign_sphincss192haraka_impl
#define pqcrypto_sign_sphincss192haraka_open pqcrypto_sign_sphincss192haraka_impl_open
#define pqcrypto_sign_sphincss192haraka_keypair pqcrypto_sign_sphincss192haraka_impl_keypair
#define pqcrypto_sign_sphincss192haraka_BYTES pqcrypto_sign_sphincss192haraka_impl_BYTES
#define pqcrypto_sign_sphincss192haraka_PUBLICKEYBYTES pqcrypto_sign_sphincss192haraka_impl_PUBLICKEYBYTES
#define pqcrypto_sign_sphincss192haraka_SECRETKEYBYTES pqcrypto_sign_sphincss192haraka_impl_SECRETKEYBYTES
#define pqcrypto_sign_sphincss192haraka_DETERMINISTIC pqcrypto_sign_sphincss192haraka_impl_DETERMINISTIC
#define pqcrypto_sign_sphincss192haraka_implementation pqcrypto_sign_sphincss192haraka_impl_implementation
#define pqcrypto_sign_sphincss192haraka_version pqcrypto_sign_sphincss192haraka_impl_version
#define pqcrypto_sign_sphincss192haraka_compiler pqcrypto_sign_sphincss192haraka_impl_compiler

#define pqcrypto_sign_sphincss192haraka_impl_BYTES 17064
#define pqcrypto_sign_sphincss192haraka_impl_PUBLICKEYBYTES 48
#define pqcrypto_sign_sphincss192haraka_impl_SECRETKEYBYTES 96

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_sphincss192haraka(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_sphincss192haraka_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_sphincss192haraka_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_sphincss192haraka(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_sphincss192haraka_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_sphincss192haraka_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincss192haraka_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincss192haraka_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincss192haraka_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
