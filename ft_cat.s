global	_ft_cat

%define	_SYSCALL(nb)	0x2000000 | nb
%define	WRITE			4
%define	READ			3
%define	STDOUT			1

section	.data
	_buff:	db	0

section	.text

_ft_cat:
	push 	rdi
	mov 	r9, rdi
	jmp 	_loop

_loop:

	mov 	rax, _SYSCALL(READ)
	mov 	rdi, r9 	;fd
	lea 	rsi, [rel _buff]
	mov 	rdx, 1
	syscall
	cmp 	rax, 1
	jne 	exit
	mov 	rax, _SYSCALL(WRITE)
	mov 	rdi, STDOUT
	lea 	rsi, [rel _buff]
	mov 	rdx, 1
	syscall
	cmp 	rax, -1
	je 		exit
	jmp 	_loop

exit:
	pop 	rdi
	mov 	rax, 0
	ret
