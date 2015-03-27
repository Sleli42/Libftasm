global	_ft_strchr

section	.text

_ft_strchr:
	cmp 	rdi, byte 0
	je 		_null
	jmp 	_loop

_loop:
	cmp		byte [rdi], 0
	je		end
	cmp 	byte [rdi], sil
	je 		end
	inc 	rdi
	jmp 	_loop

_null:
	mov rax, 0
	ret

end:
	mov rax, rdi
	ret
