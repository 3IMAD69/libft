LIBRARY = libft.a
SRCS = ft_atoi.c ft_memchr.c ft_split.c  ft_strncmp.c ft_bzero.c ft_memcmp.c ft_strchr.c ft_strnstr.c \
ft_calloc.c  ft_memcpy.c ft_strdup.c ft_strrchr.c \
ft_isalnum.c ft_memmove.c ft_striteri.c ft_strtrim.c \
ft_isalpha.c ft_memset.c ft_strjoin.c ft_substr.c \
ft_isascii.c ft_putchar_fd.c ft_strlcat.c ft_tolower.c \
ft_isdigit.c ft_putendl_fd.c ft_strlcpy.c ft_toupper.c \
ft_isprint.c ft_putnbr_fd.c ft_strlen.c \
ft_itoa.c ft_putstr_fd.c ft_strmapi.c

OBJS = $(SRCS:%.c=%.o)
CFLAGS = -Wall -Wextra -Werror
all:$(LIBRARY)
$(LIBRARY): $(OBJS)
	ar -rc $(LIBRARY) $(OBJS)
%.o: %.c
	cc -c -o $@ $< $(CFLAGS)
clean:
	rm -f $(OBJS)
fclean:clean
	rm -f $(LIBRARY)
re:fclean all