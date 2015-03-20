global  _ft_isdigit

section .text

_ft_isdigit:
    cmp rdi, 48     ;cmp int c -> val '0'
    jl end          ;if op1(int c) < op2(val '0') -> end
    cmp rdi, 57     ;cmp int c -> val '9'
    jg end          ;if op1(int c) > op2(val '9') -> end
    mov rax, 1      ; return 1 if isdigit
    ret

end:
    mov rax, 0
    ret
