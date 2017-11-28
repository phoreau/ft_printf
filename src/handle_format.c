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

// void	handle_flags_space(t_format *format)
// {
// 	va_list		arguments;
// 	int			i;

// 	i = 0;
// 	if (format->input[i] == ' ' && format->input[i++] == 'd')
// 	{
// 		ft_putchar(' ');
// 		handle_specifier(input[i], arguments);
// 	}
// }

// void	handle_flags_plus(t_format *input)
// {
// 	va_list		arguments;
// 	int			i;

// 	i = 0;
// 	if (input[i] == '+' && input[i++] == 'd')
// 	{
// 		handle_specifier(input[i], arguments);
// 	}
// }

void	handle_specifier(char specifier, va_list arguments)
{
	if (specifier == 'c')
		ft_putchar(va_arg(arguments, int));
	if (specifier == 's')
		ft_putstr(va_arg(arguments, char *));
	if (specifier == 'd' || specifier == 'i') 
		ft_putnbr(va_arg(arguments, int));
}
