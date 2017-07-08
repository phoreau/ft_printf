/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 14:05:45 by phoreau           #+#    #+#             */
/*   Updated: 2017/07/07 20:47:47 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		start_printing(int fd, char *format_str, va_list arguments)
{
	int			result;
	t_value		values;

	result = 0;
	values.fd = fd;
	while (*format_str)
	{
		if (*format_str == '%')
		{
			format_str++;
			handle_specifier(*format_str, arguments);
		}
		else if (*format_str)
		{
			ft_putchar(*format_str);
			result++;
		}
		if (*format_str == '\0')
			break ;
		format_str++;
	}
	return (result);
}

int		ft_printf(char *format_str, ...)
{
	va_list		arguments;

	if (!format_str)
	{
		ft_putendl_fd("ft_printf: format string must be valid", 2);
		exit(1);
	}
	va_start(arguments, format_str);
	va_end(arguments);
	return (start_printing(1, format_str, arguments));
}

// use function pointers so the code will be better
// %[flags][width][.precision][length]specifier
