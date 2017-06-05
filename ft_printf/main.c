/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 13:57:59 by phoreau           #+#    #+#             */
/*   Updated: 2017/05/28 13:58:07 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <locale.h>

int		main(void)
{
	//setlocale(LC_ALL, "");
	// Warning.
	// ft_printf("%d\n", ft_printf("%%   %", "test"));
	// printf("%d\n", printf("%%   %", "test"));

	// ft_printf("%d\n", ft_printf("%%   %", "test"));
	// printf("%d\n", printf("%%   %", "test"));
	
	// ft_printf("%d \n", ft_printf("{% c}", 0));
	// printf("%d \n", printf("{% c}", 0));

	// ft_printf("|retour : %d|\n", ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d", 256));
	// printf("|retour : %d|\n", printf("@main_ftprintf: %###-#0000 33...12..#0+0d", 256));

	// // END Warning.
	// ft_printf("Barong%s devient %s%d\n", "21", "Barong", 42);
	// printf("Barong%s devient %s%d\n", "21", "Barong", 42);

	// ft_printf(" | retour %d\n", ft_printf("Barong%s devient %ls%d", "21", L"Barong¥", 42));
	// printf(" | retour %d\n", printf("Barong%s devient %ls%d", "21", L"Barong¥", 42));

	ft_printf("ft_printf: %c\n", 'Y');
	printf("printf: %c\n", 'Y');
	printf("---------------------------\n");

	ft_printf("ft_printf: %s\n", "Maybe I'm a genius");
	printf("printf: %s\n", "Maybe I'm a genius");
	printf("---------------------------\n");

	ft_printf("ft_printf: %d\n", -2147483649);
	printf("%ld\n", -2147483649);
	printf("---------------------------\n");

	ft_printf("%s%s\n", "Pema ", "Horeau");
	printf("printf: %s%s\n", "Pema ", "Horeau");
	printf("---------------------------\n");

	ft_printf("ft_printf: LOL\n");
	printf("printf: LOL\n");
	printf("---------------------------\n");

	ft_printf("ft_printf: %s\n", "LOL");
	printf("printf: %s\n","LOL");
	printf("---------------------------\n");

	// ft_printf("%d\n", MB_CUR_MAX);
	// printf("%d\n", MB_CUR_MAX);

	// int a = 156;



	// ft_printf("|retour : %d|\n", ft_printf("{%ls}", L"\xF0\x9D\x84\x9E\xEF\xA3\xBF"));
	// printf("|retour : %d|\n", printf("{%ls}", L"\xF0\x9D\x84\x9E\xEF\xA3\xBF"));

	// ft_printf("|retour : %d|\n", ft_printf("{%ls}", L"\xF0\x9D\x84\x9E"));
	// printf("|retour : %d|\n", printf("{%ls}", L"\xF0\x9D\x84\x9E"));

	// ft_printf("|retour : %d|\n", ft_printf("{%lc}", 126));
	// printf("|retour : %d|\n", printf("{%lc}", 126));

	// ft_printf("|retour : %d|\n", ft_printf("{%lc}", 255));
	// printf("|retour : %d|\n", printf("{%lc}", 255));

	// ft_printf("|retour : %d|\n", ft_printf("{%c}", -1));
	// printf("|retour : %d|\n", printf("{%c}", -1));


	// ft_printf("%d\n", ft_printf("{%-30S}", L"ææäåç。"));
	// printf("%d\n", printf("{%-30S}", L"ææäåç。"));

	// ft_printf("%d\n", ft_printf("{%-30S}", L"ææäåç。"));
	// printf("%d\n", printf("{%-30S}", L"ææäåç。"));


	// ft_printf("|retour : %d|\n", ft_printf("{%lc}", 63743));
	// printf("|retour : %d|\n", printf("{%lc}", 63743));

	// ft_printf("|retour : %d|\n", ft_printf("{%ls}", L"ð"));
	// printf("|retour : %d|\n", printf("{%ls}", L"ð"));

	// //Warning
	// ft_printf("|retour : %d|\n", ft_printf("{%ls}", "\xF0\x9D\x84\x9E"));
	// printf("|retour : %d|\n", printf("{%ls}", "\xF0\x9D\x84\x9E"));
}
