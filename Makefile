#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phoreau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/05 18:17:58 by phoreau           #+#    #+#              #
#    Updated: 2017/06/05 18:18:02 by phoreau          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=libftprintf.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=/bin/rm -f

LDFLAGS=-L.

LDLIBS=-lft

SRC=ft_printf.c \
	ft_printf_character.c \

OBJ=$(SRC:.c=.o)

default: all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME) make -C ./ft_printf/libft

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean