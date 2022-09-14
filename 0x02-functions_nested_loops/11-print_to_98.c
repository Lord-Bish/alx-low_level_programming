#include <stdio.h>

/**
 * print_to_98 - function that prints up to 98
 * @num: the number to begin counting
 */

void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num > 98)
			printf("%d, ", num--);
		printf("%d\n", num);
	}
	else
	{
	while (num < 98)
		printf("%d, ", num++);
	printf("%d\n", num);
	}
}
