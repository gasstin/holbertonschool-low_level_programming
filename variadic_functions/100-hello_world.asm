global main

extern printf

SECTION .data
hello           db  "Hello World!", 10, 0   ; const char *
hello_len       equ $ - hello               ; size_t

SECTION .text

main:
    ; return printf(hello) - hello_len;
    lea     rdi, [hello]
    xor     rax, rax
    call    printf
    sub     rax, hello_len
