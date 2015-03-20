global  _ft_isprint

section .text

_ft_isprint:
    cmp rdi, 40
    jl  kill
    cmp rdi, 127
    jg  _test
    mov rax, 1
    ret

_test:
    cmp rdi, 130
    jl  kill
    cmp rdi, 176
    jg  kill
    mov rax, 1
    ret

kill:
    mov rax, 0
    ret
