global  _ft_isupper

section .text

_ft_isupper:
    cmp rdi, 65
    jl  end
    cmp rdi, 90
    jg  end
    mov rax, 1
    ret

end:
    mov rax, 0
    ret
