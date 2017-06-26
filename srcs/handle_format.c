/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:56:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/06/26 15:44:56 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// int		parse_format(char *format, va_list ap)
// {
// 	char		*str;
// 	int			index;
// 	int			decimal;
// 	int			chracter; //oddly because we're printing ascii numbers
// 	// long		longg;
// 	char		*string;
// 	while (str[index] != '\0')
// 	{
// 		if (str[index] == '\n')
// 			ft_putchar(str[index]);
// 		if (str[index] == 'c')
// 		{
// 			chracter = va_arg(ap, int);
// 			ft_putchar(chracter);
// 		}
// 		if (str[index] == 's')
// 		{
// 			string = va_arg(ap, char *);
// 			ft_putstr(string);
// 		}
// 		if (str[index] == 'd')
// 		{
// 			decimal = va_arg(ap, int);
// 			ft_putnbr(decimal);
// 		}
// 		// if (str[index] == 'ld')
// 		// {
// 		// 	longg = va_arg(ap, long);
// 		// 	ft_putnbr(longg);
// 		// }
// 		ft_putchar(str[index]);
// 		index++;
// 	}
// }

// static int		do_conversion(char *format_str, ...)
// {

// }



void	handle_format(char *format_str, va_list arguments)
{
	const char 	*string;

	while (*format_str)
	{
		if (*format_str == '%')
		{
			format_str++;
			// 'C' is for white char
			//keeps it from segfaulting
			if (*format_str == 'c' || *format_str == 'C') 
				ft_putchar(va_arg(arguments, int));
			if (*format_str == 's') 
				ft_putstr(va_arg(arguments, char *));
			// do the conversion here
		}
		else
			ft_putchar(*format_str);
		format_str++;
	}
}
