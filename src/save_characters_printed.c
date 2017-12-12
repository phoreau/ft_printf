/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_characters_printed.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 14:47:14 by phoreau           #+#    #+#             */
/*   Updated: 2017/12/12 14:47:22 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	save_chars_written(va_list arguments, t_format *format)
{
	int		*pointer;

	pointer = va_arg(arguments, int *);
	*pointer = format->chars_written;
	return ;
}
