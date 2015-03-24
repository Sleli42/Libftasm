/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubaujar <lubaujar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 17:20:54 by lubaujar          #+#    #+#             */
/*   Updated: 2015/03/24 19:04:37 by lubaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <fcntl.h>

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
void    ft_cat(int fd);

void    test_cat(void)
{
    int fd;
    fd = open("test.txt", O_RDONLY);
    printf("~~~~ ##### TEST [CAT] ##### ~~~~\n");
    ft_cat(fd);
}

void    test_strdup(void)
{
    char    s[42] = "baba au whum duplicate";

    printf("~~~~ ##### TEST [STRDUP] ##### ~~~~\n");
    printf("s: |%s|\n", s);
    printf("~>[_ft_strdup]: |%s|\n", ft_strdup(s));
    printf("----->[strdup]: |%s|\n", ft_strdup(s));
}

void    test_strcpy(void)
{
    char    str1[42] = "tamer";
    char    str2[42] = "baba au whum";
    printf("~~~~ ##### TEST [STRCPY] ##### ~~~~\n");
    printf("s1: |%s|\n", str1);
    printf("s2: |%s|\n", str2);
    printf("~>[_ft_strcpy]: |%s|\n", ft_strcpy(str1, str2));
    printf("----->[strcpy]: |%s|\n", strcpy(str1, str2));
}

void    test_memcpy(void)
{
    char    s[42] = "baba au whum";
    char    s2[42] = "yolo yo lo loyo";
    printf("~~~~ ##### TEST [MEMCPY] ##### ~~~~\n");
    printf("s1: |%s|\n", s);
    printf("s2: |%s|\n", s2);
    printf("~>[_ft_memcpy]: |%s|\n", ft_memcpy(s, s2, 4));
    printf("----->[memcpy]: |%s|\n", memcpy(s, s2, 4));
}
void    test_memset(void)
{
    char    s[42] = "baba au whum";
    char    s2[42] = "yolo yo lo loyo";
    printf("~~~~ ##### TEST [MEMSET] ##### ~~~~\n");
    printf("s: |%s|,  c: '%c',   len: %d\n", s, '0', 3);
    printf("~>[_ft_memset]: |%s|\n", ft_memset(s, '0', 3));
    printf("---->-[memset]: |%s|\n", memset(s, '0', 3));
    printf("s: |%s|,  c: '%c',   len : %d\n", s2, 'N', 6);
    printf("~>[_ft_memset]: |%s|\n", ft_memset(s2, 'N', 6));
    printf("----->[memset]: |%s|\n", memset(s2, 'N', 6));
}

void    test_puts(void)
{
    char    s[42] = "put me, yes put me";
    printf("~~~~ ##### TEST [PUTS] ##### ~~~~\n");
    printf("\t~>ret: %d\n", ft_puts(s));
    printf("\t~>ret: %d\n", ft_puts("(null)"));
    printf("\t~>ret: %d\n", ft_puts("blabla010101010111bla"));
}

void    test_strcat(void)
{
    char    s[42] = "baba au whum";
    char    s2[42] = " whum au baba";
    char    *tmp;
    printf("~~~~ ##### TEST [STRCAT] ##### ~~~~\n");
    printf("s1: |%s|\n", s);
    printf("s2: |%s|\n", s2);
    tmp = ft_strdup(s);
    printf("~>[_ft_strcat]: |%s|\n", ft_strcat(tmp, s2));
    printf("----->[strcat]: |%s|\n", strcat(s, s2));
}

void    test_strlen(void)
{
    char    s[42] = "strlen ca fait combien de char ?";
    printf("~~~~ ##### TEST [STRLEN] ##### ~~~~\n");
    printf("s: |%s|\n", s);
    printf("~>[_ft_strlen]: %d\n", ft_strlen(s));
    printf("----->[strlen]: %d\n", (int)strlen(s));
}

void    test_bzero(void)
{
    char    s[42] = "bzerobzerobzero000000";
    printf("~~~~ ##### TEST [BZERO] ##### ~~~~\n");
    printf("s avant bzero: |%s|\n", s);
    ft_bzero(s, 4);
    printf("s apres bzero: |%s|\n", s);
}

void    test_isascii(void)
{
    printf("~~~~ ##### TEST [ISASCII] ##### ~~~~\n");
    printf("char c : '%c' -> ret: %d\n", 'N', ft_isascii('N'));
    printf("char c : '%c' -> ret: %d\n", 'z', ft_isascii('z'));
    printf("char c : '%c' -> ret: %d\n", 128, ft_isascii(128));
}

void    test_isdigit(void)
{
    printf("~~~~ ##### TEST [ISDIGIT] ##### ~~~~\n");
    printf("char c : '%c' -> ret: %d\n", '2', ft_isdigit('2'));
    printf("char c : '%c' -> ret: %d\n", '1', ft_isdigit('1'));
    printf("char c : '%c' -> ret: %d\n", 4221, ft_isdigit(4221));
}

void    test_isprint(void)
{
    printf("~~~~ ##### TEST [ISPRINT] ##### ~~~~\n");
    printf("char c : '%c' -> ret: %d\n", 'n', ft_isprint('n'));
    printf("char c : '%c' -> ret: %d\n", 'V', ft_isprint('V'));
    printf("char c : '%c' -> ret: %d\n", 121, ft_isprint(121));
    printf("char c : '%c' -> ret: %d\n", 179, ft_isprint(179));
    printf("char c : '%c' -> ret: %d\n", '~', ft_isprint('~'));
    printf("char c : '%c' -> ret: %d\n", 128, ft_isprint(128));
}

void    test_isUPLOWer(void)
{
    printf("~~~~ ##### TEST [ISUPPER] ##### ~~~~\n");
    printf("char c : '%c' -> ret: %d\n", 'n', ft_isupper('n'));
    printf("char c : '%c' -> ret: %d\n", 'N', ft_isupper('N'));
    printf("char c : '%c' -> ret: %d\n", 91, ft_isupper(91));
    printf("~~~~ ##### TEST [ISLOWER] ##### ~~~~\n");
    printf("char c : '%c' -> ret: %d\n", 'n', ft_islower('n'));
    printf("char c : '%c' -> ret: %d\n", 'N', ft_islower('N'));
    printf("char c : '%c' -> ret: %d\n", 21, ft_islower(21));
}

void    test_isalpha(void)
{
    printf("~~~~ ##### TEST [ISALPHA] ##### ~~~~\n");
    printf("char c : '%c' -> ret: %d\n", 'n', ft_isalpha('n'));
    printf("char c : '%c' -> ret: %d\n", 'N', ft_isalpha('N'));
    printf("char c : '%c' -> ret: %d\n", '2', ft_isalpha('2'));
    printf("char c : '%c' -> ret: %d\n", '1', ft_isalpha('1'));
    printf("char c : '%c' -> ret: %d\n", 43, ft_isalpha(43));
}

void    test_isalnum(void)
{
    printf("~~~~ ##### TEST [ISALNUM] ##### ~~~~\n");
    printf("char c : '%c' -> ret: %d\n", 'n', ft_isalnum('n'));
    printf("char c : '%c' -> ret: %d\n", 'N', ft_isalnum('N'));
    printf("char c : '%c' -> ret: %d\n", '2', ft_isalnum('2'));
    printf("char c : '%c' -> ret: %d\n", '1', ft_isalnum('1'));
    printf("char c : '%c' -> ret: %d\n", 43, ft_isalnum(43));
}

void    test_toUPLOWer(void)
{
    printf("~~~~ ##### TEST [TOUPPER] ##### ~~~~\n");
    printf("char c : '%c' -> ret: %c\n", 'B', ft_toupper('B'));
    printf("char c : '%c' -> ret: %c\n", 'e', ft_toupper('e'));
    printf("char c : '%c' -> ret: %c\n", 'd', ft_toupper('d'));
    printf("char c : '%c' -> re : %c\n", 'O', ft_toupper('O'));
    printf("~~~~ ##### TEST [TOLOWER] ##### ~~~~\n");
    printf("char c : '%c' -> ret: %c\n", 'd', ft_tolower('d'));
    printf("char c : '%c' -> ret: %c\n", 'O', ft_tolower('O'));
    printf("char c : '%c' -> ret: %c\n", 'D', ft_tolower('D'));
    printf("char c : '%c' -> ret: %c\n", 'o', ft_tolower('o'));
}

int		main(void)
{
    char  s[42] = "baba au whum";
    char  s2[42] = " ...miss u";

    test_cat();
    test_strdup();
    test_strcpy();
    test_memset();
    test_memcpy();
    test_puts();
    test_strcat();
    test_bzero();
    test_isascii();
    test_isdigit();
    test_isprint();
    test_isUPLOWer();
    test_isalpha();
    test_isalnum();
    test_toUPLOWer();
    return (0);
}
