global  _ft_isascii

_ft_isascii:
    cmp rdi, 0      ;cmp
    jl  end         ;jl si op1 < op2
    cmp rdi, 127    ;cmp
    jg  end         ;jg si op1 > op2
    mov rax, 1      ;return value 1 if isascii
    ret

end:
    mov rax, 0      ;return value 0 -> not ascii
    ret
