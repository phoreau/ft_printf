#include <stdio.h>

int		add(int a, int b)
{
	int c = a + b;
	return (c);
}

int		sub(int a, int b)
{
	int c = a - b;
	return (c);
}

int		main()
{
	int		(*ptr)(int, int);
	int		sum;
	int		num1;
	int		num2;

	num1 = 2;
	num2 = 1;
	ptr = add;
	sum = (*ptr)(num1, num2);
	printf("yo this is the number after addition: %d\n", sum);

	ptr = sub;
	sum = (*ptr)(num1, num2);
	printf("yo this is the number after substraction: %d\n", sum);
}
