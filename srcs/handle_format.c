/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:56:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/06/27 00:58:24 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// static int		do_conversion(char *format_str, ...)
// {

// }

void	handle_format(char *format_str, va_list arguments)
{
	while (*format_str)
	{
		if (*format_str == '%')
		{
			// format_str = do_conversion();
			format_str++;
			// 'C' is for white char
			//keeps it from segfaulting
			if (*format_str == 'c') 
				ft_putchar(va_arg(arguments, int));
			if (*format_str == 's') 
				ft_putstr(va_arg(arguments, char *));
		}
		else
		{
			ft_putchar(*format_str);
		}
		format_str++;
	}
}
