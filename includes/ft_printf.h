/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 21:35:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/05/28 21:35:35 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

# define CHECK_FLAG(x) x == '-' || x == '+' || x == ' ' || x == '#' || x == '0'
# define LENGTH_SIGNAL(x) x == 'h' || x == 'l' || x == 'j' || x == 'z'
# define INVALID	1
# define VALID		0

typedef struct		s_format
{
	const char		*str;
	size_t			index;
	size_t			chars_written;
}					t_format;

typedef struct		s_flags
{
	int				hash;
	int				fal;
	int				show_sign;
	int				left_justify;
	int				pad_zeros;
}					t_value;

typedef struct		s_conversion
{
	char			*flags;
	unsigned int	width;
	unsigned int	precision;
	char			*length;
	char			specifier;
}					t_conversion;

int					ft_printf(char *format, ...);

#endif

// if (CHECK_FLAG(format[i]))
// {
//
// }