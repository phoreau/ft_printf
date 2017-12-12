/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 15:02:33 by phoreau           #+#    #+#             */
/*   Updated: 2017/12/12 15:02:42 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	int		get_flag(char c, t_flags *flags)
{
	if (c == '#')
		return (flags->hashtag = 1);
	if (c == ' ')
		return (flags->space_or_sign = 1);
	if (c == '+')
		return (flags->show_sign = 1);
	if (c == '-')
		return (flags->left_justify = 1);
	if (c == '0')
		return (flags->pad_zeros = 1);
	return (0);
}

int				handle_flags(t_value *conversion, t_format *format)
{
	char		c;

	while ((c = format->str[format->index]) && get_flag(c, &conversion->flags))
		format->index++;
	return (VALID);
}
