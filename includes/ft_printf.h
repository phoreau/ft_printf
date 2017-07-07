/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 21:35:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/07/03 22:33:36 by phoreau          ###   ########.fr       */
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
	t_format		*format;


	int				hash;
	int				fal;
	int				show_sign;
	int				left_justify;
	int				pad_zeros;
	t_format		*format;
}					t_value;

int					ft_printf(char *format_str, ...);
void				handle_format(char *format_str, va_list arguments);

#endif

// fucntions pointers 
// specifier are index
// when you recieve s as specifier, you use it as 