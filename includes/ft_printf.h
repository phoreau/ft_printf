/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 21:35:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/07/08 16:08:16 by phoreau          ###   ########.fr       */
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

typedef struct		s_format
{
	char			*flags;
	size_t			width;
	size_t			precision;
	char			*length;
	char			specifier;
}					t_format;

typedef struct		s_value
{
	int				fd;
	int				wild_prec;
	int				wild_width;
	size_t			str_len;
	int				r;
	int				flag;
	int				prec_case;
	int				no_spec;
	void			(*print_func)(const char*);
	char			*mid_str;
	char			*final_string;
	// Flags
	int				left_justify;
	int				show_sign;
	int				space_or_sign;
	int				pad_zeros;
	int				hashtag;
	// Struct
	t_format		*format;
}					t_value;

int					ft_printf(char *format_str, ...);
void				handle_format(char *format_str, va_list arguments);
void				handle_specifier(char specifier, va_list arguments);
void				handle_flags_space(char *format_str, t_value *result);

#endif

// fucntions pointers 
// specifier are index
// when you recieve s as specifier, you use it as 


// -	The output is left justified in its field, not right justified (the default).

// +	Signed numbers will always be printed with a leading sign (+ or -).

// space	Positive numbers are preceded by a space (negative numbers by a - sign).

// 0	For numeric conversions, pad with leading zeros to the field width.

// #	An alternative output form. For o, the first digit will be '0'. For x or X, "0x" or "0X" will 
// be prefixed to a non-zero result. For e, E, f, F, g and G, the output will always have a decimal point; 
// for g and G, trailing zeros will not be removed.