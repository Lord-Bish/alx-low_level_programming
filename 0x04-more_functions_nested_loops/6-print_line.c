#include "main.h"

/**
 * print_line - function that print line
 * @n: value
 * Return: Always 0
 */

void print_line(int n)
{
if (n <= 0)
	_putchar('\n');
else
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
}
