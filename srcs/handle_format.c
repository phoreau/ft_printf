/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:56:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/06/27 16:28:06 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// static int		do_conversion(char *format_str, ...)
// {

// }

// void	then_handle_format(char *format_str, va_list arguments)
// {
// 	//
// }

void	handle_specifier(char *format_str, va_list arguments)
{
	if (*format_str == 'c') 
		ft_putchar(va_arg(arguments, int));
	if (*format_str == 's') 
		ft_putstr(va_arg(arguments, char *));
	if (*format_str == 'd') 
		ft_putnbr(va_arg(arguments, int));
}

void	handle_format(char *format_str, va_list arguments)
{
	while (*format_str)
	{
		if (*format_str == '%')
		{
			format_str++;
			handle_specifier(format_str, arguments);
		}
		else
		{
			ft_putchar(*format_str);
		}
		format_str++;
	}
}
