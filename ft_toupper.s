global  _ft_toupper
extern  _ft_islower

section .text

_ft_toupper:
    call    _ft_islower
    cmp rax, 1
    je  sub
    mov rax, rdi
    ret

sub:
    sub rdi, 32
    mov rax, rdi
    ret
