/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:56:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/07/03 22:29:39 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// void	handle_specifier(char *format_str, va_list arguments)
// {
// 	if (*format_str == 'c') 
// 		ft_putchar(va_arg(arguments, int));
// 	if (*format_str == 's') 
// 		ft_putstr(va_arg(arguments, char *));
// 	if (*format_str == 'd') 
// 		ft_putnbr(va_arg(arguments, int));
// }

// void	handle_format(char *format_str, va_list arguments)
// {
// 	while (*format_str)
// 	{
// 		if (*format_str == '%')
// 		{
// 			format_str++;
// 			handle_specifier(format_str, arguments);
// 		}
// 		else
// 			ft_putchar(*format_str);
// 		format_str++;
// 	}
// }

void	handle_precision(char *format_str, t_value *result)
{
	char	*precision;


	free(precision);
}

void	handle_specifier(char *format_str, t_value *result)
{
	int		index;
	int		jdex;

	index = 0;
	while (format[index] != '\0')
	{
		jdex = 0;
		while (result->specifier[index])
		{
			if (format[index] == result->specifier[jdex])
				result->format->spec = format[index];
			jdex++;
		}
		index++;
	}
	handle_precision(format, arguments);
}

void	handle_length(char *format_str, t_value *result)
{
	handle_specifier(format, arguments);
}

void	handle_width(char *format_str, t_value *result)
{
	int		index;

	index = 0;
	handle_length(format, arguments);
}

void	handle_flags(char *format_str, t_value *result, va_list arguments)
{
	int		index;
	int		jdex;

	index = 0;
	jdex = 0;
	while (format_str[index] != '\0')
	{
		//break if number
		if (CHECK_FLAG(format[index]))
		{
			while (CHECK_FLAG(format[index]))
			{
				result->format->flags[jdex] = format_str[index];
				jdex++;
				index++;
			}
			break ;
		}
		index++;
	}
	handle_width(format, arguments);
}
