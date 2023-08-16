#ifndef pqcrypto_hashblocks_sha512_H
#define pqcrypto_hashblocks_sha512_H

#define pqcrypto_hashblocks_sha512 pqcrypto_hashblocks_sha512_impl
#define pqcrypto_hashblocks_sha512_STATEBYTES pqcrypto_hashblocks_sha512_impl_STATEBYTES
#define pqcrypto_hashblocks_sha512_BLOCKBYTES pqcrypto_hashblocks_sha512_impl_BLOCKBYTES
#define pqcrypto_hashblocks_sha512_implementation pqcrypto_hashblocks_sha512_impl_implementation
#define pqcrypto_hashblocks_sha512_version pqcrypto_hashblocks_sha512_impl_version
#define pqcrypto_hashblocks_sha512_compiler pqcrypto_hashblocks_sha512_impl_compiler

#define pqcrypto_hashblocks_sha512_impl_STATEBYTES 64
#define pqcrypto_hashblocks_sha512_impl_BLOCKBYTES 128

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int pqcrypto_hashblocks_sha512(unsigned char *,const unsigned char *,unsigned long long) __attribute__((visibility("default")));
extern const char pqcrypto_hashblocks_sha512_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_hashblocks_sha512_version[] __attribute__((visibility("default")));
extern const char pqcrypto_hashblocks_sha512_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
