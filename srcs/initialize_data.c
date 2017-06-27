/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_data.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 15:09:42 by phoreau           #+#    #+#             */
/*   Updated: 2017/06/27 15:15:18 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
//printf("%[flag][10][.precision][length][specifier]

void	initialize_flags(t_format *data, char *format_str)
{
	data->flags = ft_strnew(6);
}

void initialize_width(t_format *data, char *format_str)
{
	data->width = ft_atoi();
}

void initialize_precision(t_format *data, char *format_str)
{
	data->precision = ;
}

void initialize_length(t_format *data, char *format_str)
{
	data->length = ft_strnew();
}

void initialize_specifier(t_format *data, char *format_str)
{
	data->specifier = ;
}
