global  _ft_memcpy

section .text

_ft_memcpy:
    push    rdi
    cmp rdi, 0
    je  end
    mov rcx, rdx
    cld
    rep movsb
    jmp end

end:
    pop rax
    ret
