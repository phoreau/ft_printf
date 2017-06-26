/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 21:35:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/06/26 15:29:13 by phoreau          ###   ########.fr       */
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
	const char		*string;
	size_t			location;
	size_t			written;
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

int					ft_printf(char *format_str, ...);
void				handle_format(char *format_str, va_list arguments);

#endif

// if (CHECK_FLAG(format[i]))
// {
//
// // }

// void				handle_format(t_format *format, va_list arguments)
// {
// 	char			current;

// 	while ((current = *get_current(format)))
// 	{
// 		if (current == '%')
// 		{
// 			format->location++;
// 			handle_conversion(format, arguments);
// 		}
// 		else
// 		{
// 			ft_putchar(current);
// 			format->written++;
// 			format->location++;
// 		}
// 	}
// }