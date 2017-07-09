/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:56:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/07/08 20:51:37 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_specifier(char specifier, va_list arguments)
{
	int		d;

	if (specifier == 'c')
	{
		// ft_putstr(va_arg(arguments, int));
		d = va_arg(arguments, int);
		ft_putchar(d);
	}
	if (specifier == 's')
		ft_putstr(va_arg(arguments, char *));
	if (specifier == 'd' || specifier == 'i') 
		ft_putnbr(va_arg(arguments, int));
}

// void	handle_flags_space(char *input)
// {
// 	va_list		arguments;

// 	if (input[0] == ' ' && input[1] == 'd')
// 	{
// 		ft_putchar(input[0]);
// 		handle_specifier(input[1], arguments);
// 	}
// 	// else
// 	// 	handle_specifier(input[i + 1], arguments);
// }


// find the flags
// then activate what we want each of them to do
