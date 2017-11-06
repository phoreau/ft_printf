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

int		parse_format(char *input, va_list arguments, t_value *values)
{
	int			result;
	int			i;

	result = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] == '%' && values->input[i] != NULL)
		{
			i++;
			handle_specifier(input[i], arguments);
		}
		else if (input[i])
		{
			ft_putchar(input[i]);
			result++;
		}
		i++;
	}
	return (result);
}

int		ft_printf(char *input, ...)
{
	va_list		arguments;
	t_value		*values;

	if (!input)
	{
		ft_putendl_fd("ft_printf: format string must be valid", 2);
		exit(1);
	}
	values = (t_value*)malloc(sizeof(t_value));
	//initialize return struct
	va_start(arguments, input);
	parse_format(input, arguments, values);
	va_end(arguments);
	return (values->ret);
}
