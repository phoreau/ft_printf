/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 21:35:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/07/08 20:51:45 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdio.h> //REMOVE AT THE END !!!!

# define CHECK_FLAG(x) x == '-' || x == '+' || x == ' ' || x == '#' || x == '0'
# define LENGTH_SIGNAL(x) x == 'h' || x == 'l' || x == 'j' || x == 'z'
# define INVALID	1
# define VALID		0

typedef	enum		e_specifier
{
	STRING, POINTER, DECIMAL, OCTAL, UDECIMAL, LOWERHEX, UPPERHEX, CHARACTER,
	WIDECHAR, WIDESTR, ERROR
}					t_specifier;

typedef enum		e_length
{
	NONE, HH, H, L, LL, J, Z
}					t_length;

typedef struct		s_value
{
	// flags
	int				left_justify;
	int				show_sign;
	int				space_or_sign;
	int				pad_zeros;
	int				hashtag;

	int				percent;
	char			type;
	int				dot;
	int				pres;
	int				tab;

	int				ret;
	t_specifier		specifier;
	t_length		length;
}					t_value;

int					ft_printf(char *input, ...);
int					parse_format(char *input);
// void				handle_specifier(char specifier, va_list arguments);
int					handle_specifier(t_value *values, va_list **arguments);
int					handle_string(t_value *values, va_list **arguments);

#endif
