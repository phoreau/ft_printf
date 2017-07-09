/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phoreau <phoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 13:57:59 by phoreau           #+#    #+#             */
/*   Updated: 2017/07/08 20:45:19 by phoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <locale.h>

int		main(void)
{
	printf("========================================================\n");
	// Warning.
	// ft_printf("%d\n", ft_printf("%%   %", "test"));
	// printf("%d\n", printf("%%   %", "test"));
	// printf("========================================================\n");

	// ft_printf("%d\n", ft_printf("%%   %", "test"));
	// printf("%d\n", printf("%%   %", "test"));
	
	// ft_printf("%d \n", ft_printf("{% c}", 0));
	// printf("%d \n", printf("% c", 0));
	// printf("========================================================\n");

	// ft_printf("|retour : %d|\n", ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d", 256));
	// printf("|retour : %d|\n", printf("@main_ftprintf: %###-#0000 33...12..#0+0d", 256));

	// END Warning.
	ft_printf("Barong|%s| devient |%s|%d|\n", "21", "Barong", 42);
	printf("Barong|%s| devient |%s|%d|\n", "21", "Barong", 42);
	printf("========================================================\n");

	// ft_printf(" | retour %d\n", ft_printf("Barong%s devient %ls%d", "21", L"Barong¥", 42));
	// printf(" | retour %d\n", printf("Barong%s devient %ls%d", "21", L"Barong¥", 42));

	// ft_printf("ft_printf: %c\n", 'Y');
	// printf("printf: %c\n", 'Y');

	// ft_printf("ft_printf: %d\n", -2147483649);
	// printf("%ld\n", -2147483649);

	ft_printf("ft_printf: %%-5d -42 == |%-5d|\n", -42);
	printf("printf: %%-5d -42 == |%-5d|\n", -42);
	printf("========================================================\n");

	ft_printf("ft_printf: |% d|\n", 42);
	printf("printf: |% d|\n", 42);
	printf("========================================================\n");

	ft_printf("ft_printf: |%d|\n", 42);
	printf("printf: |%d|\n", 42);
	printf("========================================================\n");

	ft_printf("ft_printf: |LOL|\n");
	printf("printf: |LOL|\n");
	printf("========================================================\n");

	ft_printf("ft_printf: |%c|\n", 'o');
	printf("printf: |%c|\n", 'o');
	printf("========================================================\n");

	ft_printf("ft_printf: |%s|\n", "motherfucker");
	printf("printf: |%s|\n", "motherfucker");
	printf("========================================================\n");

	ft_printf("ft_printf : |%d|\n", ft_printf("{%ls}", L"\xF0\x9D\x84\x9E\xEF\xA3\xBF"));
	printf("printf : |%d|\n", printf("{%ls}", L"\xF0\x9D\x84\x9E\xEF\xA3\xBF"));
	printf("========================================================\n");

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
	return (0);
}
