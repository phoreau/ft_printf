#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phoreau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/26 21:34:30 by phoreau           #+#    #+#              #
#    Updated: 2016/10/17 12:33:00 by phoreau          ###   ########.fr        #
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