#ifndef crypto_stream_salsa20_H
#define crypto_stream_salsa20_H

#define crypto_stream_salsa20 pqcrypto_stream_salsa20_impl
#define crypto_stream_salsa20_xor pqcrypto_stream_salsa20_impl_xor
#define crypto_stream_salsa20_beforenm pqcrypto_stream_salsa20_impl_beforenm
#define crypto_stream_salsa20_afternm pqcrypto_stream_salsa20_impl_afternm
#define crypto_stream_salsa20_xor_afternm pqcrypto_stream_salsa20_impl_xor_afternm
#define crypto_stream_salsa20_KEYBYTES pqcrypto_stream_salsa20_impl_KEYBYTES
#define crypto_stream_salsa20_NONCEBYTES pqcrypto_stream_salsa20_impl_NONCEBYTES
#define crypto_stream_salsa20_BEFORENMBYTES pqcrypto_stream_salsa20_impl_BEFORENMBYTES
#define crypto_stream_salsa20_implementation pqcrypto_stream_salsa20_impl_implementation
#define crypto_stream_salsa20_version pqcrypto_stream_salsa20_impl_version
#define crypto_stream_salsa20_compiler pqcrypto_stream_salsa20_impl_compiler

#define pqcrypto_stream_salsa20_impl_KEYBYTES 32
#define pqcrypto_stream_salsa20_impl_NONCEBYTES 8

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_stream_salsa20(size_t,const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_stream_salsa20_xor(const std::string &,const std::string &,const std::string &) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_stream_salsa20(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_stream_salsa20_xor(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_stream_salsa20_beforenm(unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_stream_salsa20_afternm(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_stream_salsa20_xor_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_stream_salsa20_implementation[] __attribute__((visibility("default")));
extern const char crypto_stream_salsa20_version[] __attribute__((visibility("default")));
extern const char crypto_stream_salsa20_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
