global  _ft_strlen

section .text

_ft_strlen:
    cmp rdi, 0          ;si s == NULL
    je _null
    mov rcx, -1
    mov al, 0
    cld                 ;DF = 0
    repnz scasb         ;si DF = 0 (E)DI = (E)DI + 1
    mov rax, rcx
    neg rax             ;DEST = -DEST
    sub rax, 2
    ret

_null:
    mov rax, 0
    ret
