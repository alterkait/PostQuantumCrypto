In file included from util.c:1:
In file included from ./util.h:4:
./vec256.h:27:9: error: index for __builtin_shufflevector must be a constant integer
        return _mm256_extractf128_si256(a, i);
               ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/lib/llvm-6.0/lib/clang/6.0.0/include/avxintrin.h:4855:12: note: expanded from macro '_mm256_extractf128_si256'
  (__m128i)__builtin_shufflevector( \
           ^
In file included from util.c:1:
In file included from ./util.h:4:
./vec256.h:27:9: error: returning 'void' from a function with incompatible result type 'vec128' (aka '__m128i')
        return _mm256_extractf128_si256(a, i);
               ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
/usr/lib/llvm-6.0/lib/clang/6.0.0/include/avxintrin.h:4854:40: note: expanded from macro '_mm256_extractf128_si256'
#define _mm256_extractf128_si256(V, M) __extension__ ({ \
                                       ^~~~~~~~~~~~~~~~~~
2 errors generated.
