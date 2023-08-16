chacha.S:7:1: error: instruction requires: Not 64-bit mode
pushl %ebp
^
<instantiation>:7:31: error: invalid operand for instruction
 leaq chacha_constants(%rip), %ebx
                              ^~~~
chacha.S:19:1: note: while in macro instantiation
LOAD_VAR_PIC chacha_constants, %ebx
^
chacha.S:534:1: error: instruction requires: Not 64-bit mode
popl %ebp
^
<instantiation>:7:31: error: invalid operand for instruction
 leaq chacha_constants(%rip), %eax
                              ^~~~
chacha.S:545:1: note: while in macro instantiation
LOAD_VAR_PIC chacha_constants, %eax
^
chacha.S:593:1: error: instruction requires: Not 64-bit mode
pushl %ebp
^
chacha.S:594:1: error: instruction requires: Not 64-bit mode
pushl %ebx
^
chacha.S:614:1: error: instruction requires: Not 64-bit mode
pushl 28(%ebp)
^
chacha.S:615:1: error: instruction requires: Not 64-bit mode
pushl 24(%ebp)
^
chacha.S:616:1: error: instruction requires: Not 64-bit mode
pushl 20(%ebp)
^
chacha.S:617:1: error: instruction requires: Not 64-bit mode
pushl %ebx
^
chacha.S:624:1: error: instruction requires: Not 64-bit mode
popl %ebx
^
chacha.S:625:1: error: instruction requires: Not 64-bit mode
popl %ebp
^
chacha.S:630:1: error: instruction requires: Not 64-bit mode
pushl %ebp
^
chacha.S:631:1: error: instruction requires: Not 64-bit mode
pushl %ebx
^
chacha.S:636:1: error: instruction requires: Not 64-bit mode
pushl 32(%ebp)
^
chacha.S:637:1: error: instruction requires: Not 64-bit mode
pushl %ebx
^
chacha.S:638:1: error: instruction requires: Not 64-bit mode
pushl 16(%ebp)
^
chacha.S:639:1: error: instruction requires: Not 64-bit mode
pushl 12(%ebp)
^
chacha.S:651:1: error: instruction requires: Not 64-bit mode
pushl 28(%ebp)
^
chacha.S:652:1: error: instruction requires: Not 64-bit mode
pushl 24(%ebp)
^
chacha.S:653:1: error: instruction requires: Not 64-bit mode
pushl 20(%ebp)
^
chacha.S:654:1: error: instruction requires: Not 64-bit mode
pushl %ebx
^
chacha.S:661:1: error: instruction requires: Not 64-bit mode
popl %ebx
^
chacha.S:662:1: error: instruction requires: Not 64-bit mode
popl %ebp
^
