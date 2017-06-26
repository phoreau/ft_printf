/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 14:05:45 by phoreau           #+#    #+#             */
/*   Updated: 2017/06/26 15:28:00 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(char *format_str, ...)
{
	va_list		arguments;
	// t_format	format;

	if (!format_str)
	{
		ft_putendl_fd("ft_printf: format string must be valid", 2);
		exit(1);
	}
	// ft_bzero? not sure, in case we need to allocate memory for the struct
	//format.str = format_str; ?
	va_start(arguments, format_str);
	handle_format(format_str, arguments);
	va_end(arguments);
	return (0);
}

// create a function to handle the format
// use function pointers so the code will be better
// check for the flags first
