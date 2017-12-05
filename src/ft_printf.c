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

int		ft_printf(const char *input, ...)
{
	va_list		arguments;
	int			chars_printed;

	if (!input)
	{
		ft_putendl_fd("ft_printf: format string must be valid", 2);
		exit(1);
	}
	va_start(arguments, input);
	chars_printed = parse_format(input, arguments);
	va_end(arguments);
	return (chars_printed);
}
