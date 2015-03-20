global  _ft_islower

section .text

_ft_islower:
    cmp rdi, 97
    jl  end
    cmp rdi, 122
    jg end
    mov rax, 1
    ret

end:
    mov rax, 0
    ret
