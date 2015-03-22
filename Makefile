# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lubaujar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/19 23:10:29 by lubaujar          #+#    #+#              #
#    Updated: 2015/03/20 17:08:28 by lubaujar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a
NASM = ~/.brew/bin/nasm -f macho64 
SRC = ft_bzero.s ft_strcat.s\
		ft_isascii.s ft_isdigit.s ft_isalpha.s ft_isalnum.s ft_isprint.s\
		ft_isupper.s ft_islower.s\
		ft_toupper.s ft_tolower.s\
		ft_strlen.s ft_puts.s
OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "\n\t \033[32m[All Fine's]\033[0m\n"
	@echo "\033[33mlibfts.a has been created !\033[0m"
%.o: %.s
	@ $(NASM) -o $@ $^

clean:
	@echo "\nRM *.o.. \t      \033[32mOK BITCH!\033[0m"
	@rm -rf $(OBJ)

fclean: clean
	@echo "RM libfts.a..\t      \033[32mOK BITCH!\033[0m"
	@rm -rf $(NAME)

re: fclean all

exec:
	@gcc main.c libfts.a
	@./a.out
