/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:52:09 by phoreau           #+#    #+#             */
/*   Updated: 2017/11/08 14:52:15 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		handle_string(t_value *values, va_list *arguments)
{
	char	*str;
	int		result;

	str = ft_strdup(va_arg(*arguments, char*));
	if (!str)
		str = ft_strdup("(null)");
	if (values->dot)
		;
	// if (p->dot)
	// 	process_precision(&str, p);
	// if (p->width && p->zero)
	// 	process_zero(&str, p);
	// if (p->left)
	// 	process_left(&str, p);
	// if (p->width)
	// 	process_width(&str, p);
	ft_putstr(str);
	result = ft_strlen(str);
	ft_strdel(&str);
	return (result);
}
