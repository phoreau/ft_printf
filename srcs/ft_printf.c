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

#include "../includes/ft_printf.h"

int		ft_printf(char *format, ...)
{
	va_list		something;
	char		*str;
	int			index;
	int			decimal;
	int			chracter; //oddly because we're printing ascii numbers
	// long		longg;
	char		*string;

	index = 0;
	str = format;
	va_start(something, format);
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
		index++;
	}
	va_end(something);
	return (0);
}


// void foo(char *fmt, ...)
// {
//    va_list ap, ap2;
//    int d;
//    char c, *s;

//    va_start(ap, fmt);
//    va_copy(ap2, ap);
//    while (*fmt)
//            switch(*fmt++) {
//            case 's':                       /* string */
//                    s = va_arg(ap, char *);
//                    printf("string %s\n", s);
//                    break;
//            case 'd':                       /* int */
//                    d = va_arg(ap, int);
//                    printf("int %d\n", d);
//                    break;
//            case 'c':                       /* char */
//                    /* Note: char is promoted to int. */
//                    c = va_arg(ap, int);
//                    printf("char %c\n", c);
//                    break;
//            }
//    va_end(ap);
//    ...
//    /* use ap2 to iterate over the arguments again */
//    ...
//        va_end(ap2);
// }