/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 14:05:45 by phoreau           #+#    #+#             */
/*   Updated: 2017/07/08 20:21:25 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		start_printing(int fd, char *input, va_list arguments)
{
	int			result;
	int			i;
	t_value		values;

	result = 0;
	i = 0;
	values.fd = fd;
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			handle_specifier(input[i], arguments);
			// handle_flags_space(&(input[i + 1]));
		}
		else if (input[i])
		{
			ft_putchar(input[i]);
			result++;
		}
		if (input[i] == '\0')
			break ;
		i++;
	}
	return (result);
}

int		ft_printf(char *input, ...)
{
	va_list		arguments;

	if (!input)
	{
		ft_putendl_fd("ft_printf: format string must be valid", 2);
		exit(1);
	}
	va_start(arguments, input);
	va_end(arguments);
	return (start_printing(1, input, arguments));
}

// use function pointers so the code will be better
// %[flags][width][.precision][length]specifier
