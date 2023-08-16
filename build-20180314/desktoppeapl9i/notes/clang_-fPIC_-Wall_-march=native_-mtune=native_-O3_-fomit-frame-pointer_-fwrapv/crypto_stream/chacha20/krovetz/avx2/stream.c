stream.c:56:18: warning: implicit declaration of function '_mm_broadcastsi128_si256' is invalid in C99 [-Wimplicit-function-declaration]
    __m256i s0 = _mm_broadcastsi128_si256((__m128i *)sigma);
                 ^
stream.c:56:13: error: initializing '__m256i' (vector of 4 'long long' values) with an expression of incompatible type 'int'
    __m256i s0 = _mm_broadcastsi128_si256((__m128i *)sigma);
            ^    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
1 warning and 1 error generated.
