sign.c:106:13: warning: absolute value function 'abs' given an argument of type 'int64_t' (aka 'long') but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
    ret |= (abs(val) > (PARAM_B-PARAM_U));
            ^
sign.c:106:13: note: use function 'labs' instead
    ret |= (abs(val) > (PARAM_B-PARAM_U));
            ^~~
            labs
sign.c:146:13: warning: absolute value function 'abs' given an argument of type 'int64_t' (aka 'long') but has parameter of type 'int' which may cause truncation of value [-Wabsolute-value]
    ret |= (abs(left) > right);
            ^
sign.c:146:13: note: use function 'labs' instead
    ret |= (abs(left) > right);
            ^~~
            labs
2 warnings generated.
