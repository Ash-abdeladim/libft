# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 00:39:06 by aabdelad          #+#    #+#              #
#    Updated: 2021/12/02 02:33:37 by aabdelad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CM = cc

FLAG = -Wall -Wextra -Werror

SRC = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
        ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_itoa.c  ft_atoi.c ft_isascii.c ft_putendl_fd.c\
        ft_isalnum.c ft_strlcpy.c ft_tolower.c ft_bzero.c  ft_putnbr_fd.c ft_strlen.c\
        ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c\
        ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
        ft_strnstr.c ft_striteri.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c


CNVRT = $(SRC:.c=.o)

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(CNVRT) $(INCLUDE)
	ar rc $(NAME) $(CNVRT) $(INCLUDE)

clean:
	rm -rf $(CNVRT)

fclean: clean
	rm -rf $(NAME)

re: fclean all
