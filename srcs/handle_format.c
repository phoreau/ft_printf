/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:56:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/07/07 22:24:25 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_specifier(char specifier, va_list arguments)
{
	int		d;

	if (specifier == 'c')
	{
		d = va_arg(arguments, int);
		ft_putchar(d);
	}
	if (specifier == 's') 
		ft_putstr(va_arg(arguments, char *));
	if (specifier == 'd' || specifier == 'i') 
		ft_putnbr(va_arg(arguments, int));
}

void	handle_flags_space(char *format_str, t_value *flags)
{
	int		index;

	index = 1;
	while (format_str[index])
	{
		if (format_str[index] == ' ')
		{
			// while (CHECK_FLAG(format_str[index]))
			while (format_str[index] == ' ')
			{
				ft_putchar(' ');
				
				flags->space_or_sign++;
				index++;
			}
			break ;
		}
		index++;
	}
}


// find the flags
// then activate what we want each of them to do
