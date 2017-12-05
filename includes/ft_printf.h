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

typedef enum		e_bool
{
	FALSE, TRUE
}					t_bool;

typedef struct		s_flags
{
	t_bool			hashtag;
	t_bool			space_or_sign;
	t_bool			show_sign;
	t_bool			left_justify;
	t_bool			pad_zeros;
}					t_flags;

typedef	struct		s_format
{
	const char		*str;
	size_t			index;
	size_t			chars_written;
}					t_format;

typedef enum		e_length
{
	NONE, HH, H, L, LL, J, Z
}					t_length;

typedef	enum		e_specifier
{
	STRING, POINTER, DECIMAL, OCTAL, UDECIMAL, LOWERHEX, UPPERHEX, CHARACTER,
	WIDECHAR, WIDESTR, ERROR
}					t_specifier;

typedef struct		s_value
{
	unsigned int	width;
	unsigned int	precision;
	t_bool			int_negative;
	t_bool			precision_set;
	t_flags			flags;
	t_specifier		specifier;
	t_length		length;
}					t_value;

int					ft_printf(const char *input, ...);
int					parse_format(const char *input, va_list arguments);
int					handle_specifier(t_value *values, va_list *arguments);
int					handle_string(t_value *values, va_list *arguments);

#endif
