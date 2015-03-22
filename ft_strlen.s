global  _ft_strlen

section .text

_ft_strlen:
    cmp rdi, 0
    je _null
    mov rcx, -1
    mov al, 0
    cld
    repnz scasb
    mov rax, rcx
    neg rax
    sub rax, 2
    ret

_null:
    mov rax, 0
    ret
