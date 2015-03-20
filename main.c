/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubaujar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 17:20:54 by lubaujar          #+#    #+#             */
/*   Updated: 2015/03/20 04:21:03 by lubaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void  ft_bzero(void *s, size_t n);
char  *ft_strcat(char *s1, char *s2);
int    ft_isascii(int c);
int    ft_isdigit(int c);
int    ft_isprint(int c);
int    ft_isupper(int c);
int    ft_islower(int c);
int    ft_isalpha(int c);
int    ft_isalnum(int c);
int    ft_toupper(int c);
int    ft_tolower(int c);

int		main(void)
{
    char  s[42] = "baba au whum";
    char  s2[42] = " ...miss u";

    printf("### TEST STRCAT ###\n");
    printf("s1: |%s|\ns2: |%s|\nstrcat: |%s|\n", s, s2, ft_strcat(s, s2));
    printf("\n### TEST BZERO ###\n");
    printf("s avant bzero: %s\n", s);
    ft_bzero(s, 4);
    printf("s apres bzero: %s\n", s);
    printf("\n### TEST ISASCII ###\n");
    printf("char c : '%c' -> ret value : %d\n", 'N', ft_isascii('N'));
    printf("char c : '%c' -> ret value : %d\n", 'z', ft_isascii('z'));
    printf("char c : '%c' -> ret value : %d\n", 128, ft_isascii(128));
    printf("\n### TEST ISDIGIT ###\n");
    printf("char c : '%c' -> ret value : %d\n", '2', ft_isdigit('2'));
    printf("char c : '%c' -> ret value : %d\n", '1', ft_isdigit('1'));
    printf("char c : '%c' -> ret value : %d\n", 4221, ft_isdigit(4221));
    printf("\n### TEST ISPRINT ###\n");
    printf("char c : '%c' -> ret value : %d\n", 'n', ft_isprint('n'));
    printf("char c : '%c' -> ret value : %d\n", 'V', ft_isprint('V'));
    printf("char c : '%c' -> ret value : %d\n", 121, ft_isprint(121));
    printf("char c : '%c' -> ret value : %d\n", 179, ft_isprint(179));
    printf("char c : '%c' -> ret value : %d\n", '~', ft_isprint('~'));
    printf("char c : '%c' -> ret value : %d\n", 128, ft_isprint(128));
    printf("\n### TEST ISUPPER ###\n");
    printf("char c : '%c' -> ret value : %d\n", 'n', ft_isupper('n'));
    printf("char c : '%c' -> ret value : %d\n", 'N', ft_isupper('N'));
    printf("char c : '%c' -> ret value : %d\n", 91, ft_isupper(91));
    printf("\n### TEST ISLOWER ###\n");
    printf("char c : '%c' -> ret value : %d\n", 'n', ft_islower('n'));
    printf("char c : '%c' -> ret value : %d\n", 'N', ft_islower('N'));
    printf("char c : '%c' -> ret value : %d\n", 21, ft_islower(21));
    printf("\n### TEST ISALPHA ###\n");
    printf("char c : '%c' -> ret value : %d\n", 'n', ft_isalpha('n'));
    printf("char c : '%c' -> ret value : %d\n", 'N', ft_isalpha('N'));
    printf("char c : '%c' -> ret value : %d\n", '2', ft_isalpha('2'));
    printf("char c : '%c' -> ret value : %d\n", '1', ft_isalpha('1'));
    printf("char c : '%c' -> ret value : %d\n", 43, ft_isalpha(43));
    printf("\n### TEST ISALNUM ###\n");
    printf("char c : '%c' -> ret value : %d\n", 'n', ft_isalnum('n'));
    printf("char c : '%c' -> ret value : %d\n", 'N', ft_isalnum('N'));
    printf("char c : '%c' -> ret value : %d\n", '2', ft_isalnum('2'));
    printf("char c : '%c' -> ret value : %d\n", '1', ft_isalnum('1'));
    printf("char c : '%c' -> ret value : %d\n", 43, ft_isalnum(43));
    printf("\n### TEST TOUPPER ###\n");
    printf("char c : '%c' -> ret value : %c\n", 'B', ft_toupper('B'));
    printf("char c : '%c' -> ret value : %c\n", 'e', ft_toupper('e'));
    printf("char c : '%c' -> ret value : %c\n", 'd', ft_toupper('d'));
    printf("char c : '%c' -> ret value : %c\n", 'O', ft_toupper('O'));
    printf("\n### TEST TOLOWER ###\n");
    printf("char c : '%c' -> ret value : %c\n", 'd', ft_tolower('d'));
    printf("char c : '%c' -> ret value : %c\n", 'O', ft_tolower('O'));
    printf("char c : '%c' -> ret value : %c\n", 'D', ft_tolower('D'));
    printf("char c : '%c' -> ret value : %c\n", 'o', ft_tolower('o'));
    return (0);
}
