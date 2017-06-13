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
# define LENGTH_SIG(x) x == 'h' || x == 'l' || x == 'j' || x == 'z'

typedef struct		s_format
{
	char			*flags;
	int				width;
	int				precision;
	char			*length;
	char			specifier;

}					t_format;

typedef struct 		s_value
{
	int				nb_chars_printed;
	int				location;
	char			*flags;
	char			*specifiers;
	char			*format;
}					t_value;

int		ft_printf(char *format, ...);

#endif



if (CHECK_FLAG(format[i]))
{

}