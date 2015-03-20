global  _ft_isalpha
extern  _ft_isupper
extern  _ft_islower

section .text

_ft_isalpha:
    call    _ft_isupper
    cmp rax, 1
    je  isalpha
    call    _ft_islower
    cmp rax, 1
    je  isalpha
    mov rax, 0
    ret

isalpha:
    mov rax, 1
    ret
