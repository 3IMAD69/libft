#ifndef LIBFT_H
# define LIBFT_H

typedef long unsigned int size_t;
# include <stdlib.h>
# include <stdint.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen (const char *s);
void    *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);




int ft_strncmp(const char *s1, const char *s2, size_t n);

#endif