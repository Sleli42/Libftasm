global  _ft_puts
extern  _ft_strlen

%define _SYSCALL(nb)    0x2000000 | nb
%define WRITE           4
%define STDOUT          1

section .data
    _null_str   db  "(null)", 0
    _new_line   db  10

section .text

_ft_puts:
    cmp byte [rdi], byte 0                  ;check if str == NULL
    je  _null
    jmp _write_str

_write_str:
    cmp byte[rdi], 0
    je backslash_n
    mov r9, rdi
    push    rdi
    mov rax, _SYSCALL(WRITE)
    mov rdi, 1
    mov rsi, r9
    mov rdx, 1
    syscall
    pop rdi
    inc rdi
    jmp _write_str

_null:
    push    rdi                 ;work just on rdi
    mov rax, _SYSCALL(WRITE)    ;define syscall
    mov rdi, 1                  ;fd
    lea rsi, [rel _null_str]    ;load "_null_str"
    mov rdx, 6                  ;len -> write
    syscall                     ;appel syscall
    pop     rdi                 ;for next use
    jmp backslash_n             ;...

backslash_n:
    push    rdi
    mov rax, _SYSCALL(WRITE)
    mov rdi, 1
    lea rdx, [rel _new_line]
    mov rdx, 1                  ;nb de char a put
    pop rdi
    jmp end

end:
    mov rax, 1
    ret
