global  _ft_strcat

section .text

_ft_strcat:
        mov rax, rdi        ;return value, the pointer s1
        jmp _loop_rdi

_loop_rdi:
        cmp byte [rdi], 0
        je  _loop_cpy
        inc rdi
        jmp _loop_rdi

_loop_cpy:
        cmp byte [rsi], 0
        je  end
        movsb
        jmp _loop_cpy

end:
    ret
