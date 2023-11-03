#ifndef LIBFT_H
# define LIBFT_H

typedef long unsigned int size_t;
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

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
char *ft_strdup(const char *s);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);



int ft_strncmp(const char *s1, const char *s2, size_t n);
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);



#endif