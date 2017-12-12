/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 11:19:25 by phoreau           #+#    #+#             */
/*   Updated: 2017/12/05 11:19:29 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// static	int		two_percent(t_format *format)
// {
	
// }

// static void		two_percent_bis(t_conversion *conversion,
// 											t_format *format)
// {
	
// }

static int		conversion_sub_task(t_value *conversion,
		va_list arguments, t_format *format)
{
	if (handle_flags(conversion, format) == VALID && 
	// 		&& read_width(conversion, arguments, format) == VALID
	// 		&& read_precision(conversion, arguments, format) == VALID
	// 		&& read_length(conversion, arguments, format) == VALID &&
			handle_specifier(conversion, format) == VALID)
		return (VALID);
	else
		return (INVALID);
}

static void		print_variable(t_format *format, va_list arguments)
{
	t_value		conversion;

		// if (two_percent(format))
		// return ;
	ft_bzero(&conversion, sizeof(t_value));
	if (conversion_sub_task(&conversion, arguments, format) == VALID)
	{
		if (conversion.specifier == CHARS_WRITTEN)
			save_chars_written(arguments, format);
		// else
		// 	write_conversion_substring(&conversion, arguments, format);
		return ;
	}
	// else
	// 	two_percent_bis(&conversion, format);
	return ;
}

int		parse_format(const char *format, va_list arguments)
{
	t_format		track_format;

	ft_bzero(&track_format, sizeof(t_value));
	track_format.str = format;
	while (track_format.str[track_format.index] != '\0')
	{
		if (track_format.str[track_format.index] == '%')
		{
			track_format.index++;
			print_variable(&track_format, arguments);
		}
		else
		{
			ft_putchar(track_format.str[track_format.index++]);
			track_format.chars_written++;
		}
	}
	return (track_format.chars_written);
}
