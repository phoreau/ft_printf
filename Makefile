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
LIBFT=./libft/libft.a
DEBUGFLAGS=-fsanitize=address -g -o ft_printf_debug
LEAKCHECK=-g -o ft_printf_leakcheck

SRCS=ft_printf.c \
	handle_format.c \
	main.c \

OBJDIR = ./obj/
SRCDIR = ./srcs/
LIBDIR = ./libft/
INCDIR = ./includes/

SRC = $(addprefix $(SRCDIR),$(SRCS))
OBJ = $(addprefix $(OBJDIR),$(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@echo "<< Compiling libftprintf... >>"
	@ar rc $(NAME) $(OBJ) ./libft/*.o
	@echo "<< Made libftprintf.a! >>"

$(OBJ): $(SRC)
	@$(CC) $(CFLAGS) -c -I$(INCDIR) $(SRC)
	@mkdir -p $(OBJDIR)
	@mv $(SRCS:.c=.o) $(OBJDIR)

$(LIBFT):
	make -C $(LIBDIR)

clean:
	@echo "<< Cleaning libftprintf >>"
	@rm -rf $(OBJDIR)
	@rm -rf ft_printf_debug
	@rm -rf ft_printf_debug.dSYM
	@rm -rf ft_printf_leakcheck
	@rm -rf ft_printf_leakcheck.dSYM
	@make -C $(LIBDIR) clean

fclean: clean
	@echo "<< Fclean libftprintf >>"
	@rm -rf $(NAME) *.o
	@make -C $(LIBDIR) fclean

re: fclean all

debug : $(LIBFT)
	@echo "<< Compiling libftprintf with debugging options >>"
	$(CC) $(SRC) $(LIBFT) -I$(INCDIR) $(DEBUGFLAGS)

leakcheck : $(LIBFT)
	@echo "<< Compiling libftprintf with valgrind options >>"
	$(CC) $(SRC) $(LIBFT) -I$(INCDIR) $(LEAKCHECK)

.PHONY: all, clean, fclean, re