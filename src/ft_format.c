/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 11:19:25 by phoreau           #+#    #+#             */
/*   Updated: 2017/12/05 11:19:29 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// static int		read_conversion_substr(t_conversion *conversion,
// 		va_list ap, t_format *format)
// {

// }

// static	int		double_percent(t_format *format)
// {
	
// }

// static void		double_percent_followup(t_conversion *conversion,
// 											t_format *format)
// {
	
// }

static void		print_variable(t_format *format, va_list arguments)
{
	t_value		conversion;

	ft_bzero(&conversion, sizeof(t_value));

}

int		parse_format(const char *input, va_list arguments)
{
	t_format		track_format;

	ft_bzero(&track_format, sizeof(t_value));
	track_format.str = input;
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
