global  _ft_strdup
extern  _ft_strlen
extern	_ft_memcpy
extern 	_malloc

section .text

_ft_strdup:
	push r8
	push r9
	call _ft_strlen
	mov r9, rdi
	mov r8, rax
	mov rdi, rax
	call _malloc
	cmp rax, 0
	je _null
	mov rdi, rax
	pop r9
	pop r8
	call _ft_memcpy
	ret

_null:
	ret
