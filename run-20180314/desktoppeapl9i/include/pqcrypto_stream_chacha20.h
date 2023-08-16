#ifndef pqcrypto_stream_chacha20_H
#define pqcrypto_stream_chacha20_H

#define pqcrypto_stream_chacha20 pqcrypto_stream_chacha20_impl
#define pqcrypto_stream_chacha20_xor pqcrypto_stream_chacha20_impl_xor
#define pqcrypto_stream_chacha20_beforenm pqcrypto_stream_chacha20_impl_beforenm
#define pqcrypto_stream_chacha20_afternm pqcrypto_stream_chacha20_impl_afternm
#define pqcrypto_stream_chacha20_xor_afternm pqcrypto_stream_chacha20_impl_xor_afternm
#define pqcrypto_stream_chacha20_KEYBYTES pqcrypto_stream_chacha20_impl_KEYBYTES
#define pqcrypto_stream_chacha20_NONCEBYTES pqcrypto_stream_chacha20_impl_NONCEBYTES
#define pqcrypto_stream_chacha20_BEFORENMBYTES pqcrypto_stream_chacha20_impl_BEFORENMBYTES
#define pqcrypto_stream_chacha20_implementation pqcrypto_stream_chacha20_impl_implementation
#define pqcrypto_stream_chacha20_version pqcrypto_stream_chacha20_impl_version
#define pqcrypto_stream_chacha20_compiler pqcrypto_stream_chacha20_impl_compiler

#define pqcrypto_stream_chacha20_impl_KEYBYTES 32
#define pqcrypto_stream_chacha20_impl_NONCEBYTES 8

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_stream_chacha20(size_t,const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_stream_chacha20_xor(const std::string &,const std::string &,const std::string &) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_stream_chacha20(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_stream_chacha20_xor(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_stream_chacha20_beforenm(unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_stream_chacha20_afternm(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_stream_chacha20_xor_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_stream_chacha20_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_stream_chacha20_version[] __attribute__((visibility("default")));
extern const char pqcrypto_stream_chacha20_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
