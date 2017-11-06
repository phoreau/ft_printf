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
	int				tabside;
	int				zerotab;
	int				plus;
	int				hash;
	int				space;
	int				percent;
	char			type;
	int				dot;
	int				pres;
	int				tab;
	int				left_justify;
	int				show_sign;
	int				space_or_sign;
	int				pad_zeros;
	int				hashtag;
	int				ret;
	char			**input;
	t_format		*format;
}					t_value;

int					ft_printf(char *input, ...);
void				handle_specifier(char specifier, va_list arguments);
void				handle_flags_plus(t_format *input);

#endif
