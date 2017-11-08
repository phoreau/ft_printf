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

t_specifier		get_specifier(char specifier)
{
	if (specifier == 'c' || specifier == 'C')
		ft_putchar(va_arg(arguments, int));
	if (specifier == 's' || specifier == 'S')
		return (STRING);
	if (specifier == 'd' || specifier == 'i' || specifier == 'D')
		ft_putnbr(va_arg(arguments, int));
	// if (specifier == 'u' || specifier == 'U')
	// 	return (U_DECIMAL);
	// if (specifier == 'o' || specifier == 'O')
	// 	return (OCTAL);
	// if (specifier == 'x')
	// 	return (HEX_LOWER);
	// if (specifier == 'X')
	// 	return (HEX_UPPER);
	// if (specifier == 'p')
	// 	return (POINTER);
	// if (specifier == 'n')
	// 	return (CHARS_WRITTEN);
}

void			handle_specifier(t_value *values, va_list **arguments)
{
	int		ret;

	ret = 0;
	if (values->specifier == STRING)
		ret = handle_string(values, arguments);
	// else if (values->specifier == POINTER)
	// 	ret = process_pointer(p, arguments);
	// else if (values->specifier == DECIMAL)
	// 	ret = ft_putnbr(va_arg(arguments, int));
		//ret = process_int(p, arguments);
	// else if (values->specifier == OCTAL)
	// 	ret = process_octal(p, arguments);
	// else if (values->specifier == LOWERHEX || values->specifier == UPPERHEX)
	// 	ret = process_hex(p, arguments);
	// else if (values->specifier == UNSIGNEDECI)
	// 	ret = process_unsigned(p, arguments);
	// else if (values->specifier == CHARACTER || values->specifier == WIDECHAR)
	// 	ret = process_character(p, arguments);
	// else
	// 	ret = process_error(p);
	return (ret);
}
