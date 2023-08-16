#ifndef crypto_sign_sphincss192haraka_H
#define crypto_sign_sphincss192haraka_H

#define crypto_sign_sphincss192haraka pqcrypto_sign_sphincss192haraka_impl
#define crypto_sign_sphincss192haraka_open pqcrypto_sign_sphincss192haraka_impl_open
#define crypto_sign_sphincss192haraka_keypair pqcrypto_sign_sphincss192haraka_impl_keypair
#define crypto_sign_sphincss192haraka_BYTES pqcrypto_sign_sphincss192haraka_impl_BYTES
#define crypto_sign_sphincss192haraka_PUBLICKEYBYTES pqcrypto_sign_sphincss192haraka_impl_PUBLICKEYBYTES
#define crypto_sign_sphincss192haraka_SECRETKEYBYTES pqcrypto_sign_sphincss192haraka_impl_SECRETKEYBYTES
#define crypto_sign_sphincss192haraka_DETERMINISTIC pqcrypto_sign_sphincss192haraka_impl_DETERMINISTIC
#define crypto_sign_sphincss192haraka_implementation pqcrypto_sign_sphincss192haraka_impl_implementation
#define crypto_sign_sphincss192haraka_version pqcrypto_sign_sphincss192haraka_impl_version
#define crypto_sign_sphincss192haraka_compiler pqcrypto_sign_sphincss192haraka_impl_compiler

#define pqcrypto_sign_sphincss192haraka_impl_BYTES 17064
#define pqcrypto_sign_sphincss192haraka_impl_PUBLICKEYBYTES 48
#define pqcrypto_sign_sphincss192haraka_impl_SECRETKEYBYTES 96

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_sphincss192haraka(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_sphincss192haraka_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_sphincss192haraka_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_sphincss192haraka(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_sphincss192haraka_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_sphincss192haraka_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_sphincss192haraka_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_sphincss192haraka_version[] __attribute__((visibility("default")));
extern const char crypto_sign_sphincss192haraka_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
