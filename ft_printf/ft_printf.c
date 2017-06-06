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

int		ft_printf(char *format, ...)
{
	va_list		something;
	va_list		something2;
	char		*str;
	int			index;
	int			decimal;
	int			chracter; //oddly because we're printing ascii numbers
	// long		longg;
	char		*string;

	index = 0;
	str = format;
	va_start(something, format);
	va_copy(something2, something);
	while (str[index] != '\0')
	{
		if (str[index] == '\n')
			ft_putchar(str[index]);
		if (str[index] == 'c')
		{
			chracter = va_arg(something, int);
			ft_putchar(chracter);
		}
		if (str[index] == 's')
		{
			string = va_arg(something, char *);
			ft_putstr(string);
		}
		if (str[index] == 'd')
		{
			decimal = va_arg(something, int);
			ft_putnbr(decimal);
		}
		// if (str[index] == 'ld')
		// {
		// 	longg = va_arg(something, long);
		// 	ft_putnbr(longg);
		// }
		ft_putchar(str[index]);
		index++;
	}
	va_end(something);
	va_end(something2);
	return (0);
}

//creer une fonction pour les 