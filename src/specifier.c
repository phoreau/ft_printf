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
		return (CHARACTER);
	if (specifier == 's' || specifier == 'S')
		return (STRING);
	if (specifier == 'd' || specifier == 'i' || specifier == 'D')
		return (DECIMAL);
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
	return (ERROR);
}

int			handle_specifier(t_value *values, va_list **arguments)
{
	int		result;

	result = 0;
	if (values->specifier == STRING)
		result = handle_string(values, arguments);
	return (result);
}
