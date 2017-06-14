/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:56:32 by phoreau           #+#    #+#             */
/*   Updated: 2017/06/09 14:56:35 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int		parse_format(char *format, va_list ap)
// {
// 	char		*str;
// 	int			index;
// 	int			decimal;
// 	int			chracter; //oddly because we're printing ascii numbers
// 	// long		longg;
// 	char		*string;
// 	while (str[index] != '\0')
// 	{
// 		if (str[index] == '\n')
// 			ft_putchar(str[index]);
// 		if (str[index] == 'c')
// 		{
// 			chracter = va_arg(ap, int);
// 			ft_putchar(chracter);
// 		}
// 		if (str[index] == 's')
// 		{
// 			string = va_arg(ap, char *);
// 			ft_putstr(string);
// 		}
// 		if (str[index] == 'd')
// 		{
// 			decimal = va_arg(ap, int);
// 			ft_putnbr(decimal);
// 		}
// 		// if (str[index] == 'ld')
// 		// {
// 		// 	longg = va_arg(ap, long);
// 		// 	ft_putnbr(longg);
// 		// }
// 		ft_putchar(str[index]);
// 		index++;
// 	}
// }
