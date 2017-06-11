/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 14:05:45 by phoreau           #+#    #+#             */
/*   Updated: 2017/05/28 14:05:49 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int		ft_printf(char *format, ...)
{
	va_list		arguments;
	t_value		ret;

	if (!format)
	{
		ft_putendl_fd("ft_printf: format string must be valid", 2);
		exit(1);
	}
	//not sure, in case we need to allocate memory for the struct
	// ret = malloc(sizeof(t_value));
	va_start(arguments, format);
	//ret.nb_chars_printed = handle_format(format, arguments);
	va_end(arguments);
	return (ret.nb_chars_printed);
}

//create a function to handle the format
//use function pointers so the code will be better
//check for the flags first
