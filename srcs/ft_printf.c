/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 14:05:45 by phoreau           #+#    #+#             */
/*   Updated: 2017/05/28 14:05:49 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		handle_flags(t_format *format, va_list arguments)
{

}

int		ft_printf(char *format, ...)
{
	va_list		arguments;
	t_value		ret;

	if (!format)
	{
		ft_putendl_fd("ft_printf: format string must be valid", 2);
		exit(1);
	}
	//not sure, in case we need to allocate memory for the struct
	// ret = malloc(sizeof(t_value));
	va_start(arguments, format);
	//ret.nb_chars_printed = handle_format(format, arguments);
	va_end(arguments);
	return (ret.nb_chars_printed);
}

//create a function to handle the format
//use function pointers so the code will be better
//check for the flags first
