# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcruz <dcruz@student.42barcelona.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 22:36:55 by dcruz             #+#    #+#              #
#    Updated: 2024/01/30 10:54:47 by dcruz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memcmp.c ft_putstr_fd.c ft_striteri.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_putnbr_fd.c ft_memchr.c \
ft_strchr.c ft_strdup.c ft_strjoin.c ft_putchar_fd.c ft_putendl_fd.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c  ft_strncmp.c ft_strnstr.c \
ft_strrchr.c ft_strmapi.c ft_substr.c ft_tolower.c ft_toupper.c ft_trim.c


OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
