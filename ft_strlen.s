global  _ft_strlen

section .text

_ft_strlen:
    cmp byte [rdi], 0
    je _kill
    mov rcx, 0
    jmp _loop

_loop:
    cmp byte [rdi], 0
    je  end
    inc rcx
    inc rdi
    jmp _loop

_kill:
    mov rax, 0
    ret

end:
    mov rax, rcx
    ret
