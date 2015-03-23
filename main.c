/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubaujar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 17:20:54 by lubaujar          #+#    #+#             */
/*   Updated: 2015/03/23 23:04:46 by lubaujar         ###   ########.fr       */
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
int    ft_strlen(char *s);
int    ft_puts(char *s);
void   *ft_memset(void *b, int c, size_t len);
void   *ft_memcpy(void *dest, void *src, size_t n);
char    *ft_strcpy(char *s1, char *s2);
char    *ft_strdup(char *s);

void    test_strdup(void)
{
    char    s[42] = "baba au whum duplicate";

    printf("### TEST STRDUP ###\n");
    printf("s: |%s|\n", s);
    printf("dup: |%s|\n", ft_strdup(s));
    printf("\n\n");
}

void    test_strcpy(void)
{
    char    str1[42] = "tamer";
    char    str2[42] = "baba au whum";
    printf("### TEST STRCPY ###\n");
    printf("|%s|\n", str1);
    printf("|%s|\n", str2);
    printf("|%s|\n", ft_strcpy(str1, str2));
    printf("\n\n");
}

void    test_memcpy(void)
{
    char    s[42] = "baba au whum";
    char    s2[42] = "yolo yo lo loyo";
    printf("### TEST MEMCPY ###\n");
    printf("[ft_memcpy] s : %s\n", ft_memcpy(s, s2, 4));
    printf("[memcpy] s : %s\n", memcpy(s, s2, 4));
    printf("\n\n");
}
void    test_memset(void)
{
    char    s[42] = "baba au whum";
    char    s2[42] = "yolo yo lo loyo";
    printf("### TEST MEMSET ###\n");
    printf("s : %s,  c : '%c',   len : %d\n", s, '0', 3);
    printf("[memset] s : %s\n", ft_memset(s, '0', 3));
    printf("s : %s,  c : '%c',   len : %d\n", s2, 'N', 6);
    printf("[memset] s : %s\n", ft_memset(s2, 'N', 6));
    printf("\n\n");
}

void    test_puts(void)
{
    char    s[42] = "put me, yes put me";
    printf("### TEST PUTS ###\n");
    printf("\nret value: %d\n", ft_puts(s));
    printf("\nret value: %d\n", ft_puts("(null)"));
    printf("\nret value: %d\n", ft_puts("blablablablabla010101010111bla"));
    printf("\n\n");
}
int		main(void)
{
    char  s[42] = "baba au whum";
    char  s2[42] = " ...miss u";

    test_strdup();
    test_strcpy();
    test_memset();
    test_memcpy();
    test_puts();
    /*
    printf("### TEST STRCAT ###\n");
    printf("s1: |%s|\ns2: |%s|\nstrcat: |%s|\n", s, s2, ft_strcat(s, s2));
    printf("\n### TEST STRLEN ###\n");
    printf("s: |%s|\nlen: %d\n", "strlen", ft_strlen("strlen"));
    printf("s: |%s|\nlen: %d\n", "", ft_strlen(""));
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
    printf("char c : '%c' -> ret value : %c\n", 'o', ft_tolower('o'));*/
    return (0);
}
