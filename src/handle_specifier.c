/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:37:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/12/12 13:37:40 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static t_specifier	get_specifier(char specifier)
{
	if (specifier == 'c' || specifier == 'C')
		return (CHARACTER);
	if (specifier == 's' || specifier == 'S')
		return (STRING);
	if (specifier == 'd' || specifier == 'i' || specifier == 'D')
		return (DECIMAL);
	if (specifier == 'u' || specifier == 'U')
		return (U_DECIMAL);
	if (specifier == 'o' || specifier == 'O')
		return (OCTAL);
	if (specifier == 'x')
		return (LOWER_HEX);
	if (specifier == 'X')
		return (UPPER_HEX);
	if (specifier == 'p')
		return (POINTER);
	if (specifier == 'n')
		return (CHARS_WRITTEN);
	else if (specifier != '\n')
		return (specifier);
	return (INVALID_SPECIFIER);
}

int					handle_specifier(t_value *conversion, t_format *format)
{
	char	specifier;

	if (!format->str[format->index])
		return (INVALID);
	specifier = format->str[format->index];
	if (conversion->specifier == INVALID_SPECIFIER)
		return (INVALID);
	conversion->specifier = get_specifier(format->str[format->index]);
	// if (specifier == 'D' || specifier == 'U' || specifier == 'C'
	// 		|| specifier == 'O' || specifier == 'S')
	// 	conversion->length = L;
	format->index++;
	return (VALID);
}
