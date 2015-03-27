global	_ft_strrchr

section	.text

_ft_strrchr:
	cmp	rdi, byte 0
	je	_null
	jmp	_go_end

_go_end:
	cmp	byte [rdi + 1], byte 0
	je	_search_occ
	inc	rdi
	jmp	_go_end

_search_occ:
	cmp byte [rdi], sil
	je	_end
	dec	rdi
	jmp	_search_occ

_null:
	mov	rax, 0
	ret

_end:
	mov	r8, rdi
	mov rdi, 0
	mov	rax, r8
	ret