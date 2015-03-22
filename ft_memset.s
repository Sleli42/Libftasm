global  _ft_memset

section .text

_ft_memset:
    cmp rdi, 0
    je  _null
    mov r9, rdi
    mov rcx, rdx
    mov al, sil         ;char c, lower 8 bits of rsi
    cld
    rep stosb
    mov rax, r9         ;return first arg
    ret

_null:
    mov rax, rdi
    ret
