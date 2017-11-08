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

NAME		= libftprintf.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
LIBFT		= ./libft/libft.a
DEBUGFLAGS	= -fsanitize=address -g -o ft_printf_debug
LEAKCHECK	= -g -o ft_printf_leakcheck

SRCS		= ft_printf.c \
			specifier.c \
			handle_string.c \


OBJDIR 		= ./obj/
SRCDIR 		= ./src/
LIBDIR 		= ./libft/
INCDIR 		= ./includes/

SRC 		= $(addprefix $(SRCDIR),$(SRCS))
OBJ			= $(addprefix $(OBJDIR),$(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@echo "\033[32m<< Compiling libftprintf... >>\033[0m"
	@ar rc $(NAME) $(OBJ) ./libft/*.o
	@echo "\033[32m<< Made libftprintf.a! >>\033[0m"

$(OBJ): $(SRC)
	@$(CC) $(CFLAGS) -c -I$(INCDIR) $(SRC)
	@mkdir -p $(OBJDIR)
	@mv $(SRCS:.c=.o) $(OBJDIR)

$(LIBFT):
	make -C $(LIBDIR)

clean:
	@echo "\033[34;1m<< Cleaning libftprintf >>\033[0m"
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

.PHONY: all, clean, fclean, res

