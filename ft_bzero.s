# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lubaujar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/19 23:46:56 by lubaujar          #+#    #+#              #
#    Updated: 2015/03/19 23:58:49 by lubaujar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global	_ft_bzero

section	.text

_ft_bzero:
		mov	rbx, rdi  		;on met rdi(void *s) dans rbx
		mov	rcx, 0		  	;on init le registre compteur a 0
		
_loop:
		cmp	rcx, rsi	  	;on cmp rcx(compteur) avec rsi(size_t n)
		je	end			    	;si op1 == op2 -> ret
		mov	byte [rbx], 0	;on remplit de 0 rbx(->rdi->void *s)
		inc	rbx			    	;++
		inc	rcx			    	;++
		jmp	_loop		    	;on rappel loop

end:
		ret				    	  ;return
