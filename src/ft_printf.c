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

int		parse_format(char *input, va_list *arguments)
{
	t_value		values;
	int			result;
	int			characters;
	int			i;

	result = 0;
	characters = 0;
	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			ft_bzero(&values, sizeof(t_value));
			result += handle_specifier(&values, &arguments);
		}
		else
		{
			ft_putchar(input[i]);
			characters++;
		}
		i++;
	}
	return (result + characters);
}

int		ft_printf(char *input, ...)
{
	va_list		arguments;
	int			result;

	if (!input)
	{
		ft_putendl_fd("ft_printf: format string must be valid", 2);
		exit(1);
	}
	va_start(arguments, input);
	result = parse_format(input, &arguments);
	va_end(arguments);
	return (result);
}

