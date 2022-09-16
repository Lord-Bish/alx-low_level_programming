#include "main.h"

/**
 * print_diagonal - function that print a diagonal line
 * @n: fuunction value
 * Return: void
 */

void print_diagonal(int n)
{
int i;
int j;

if (n <= 0)
	_putchar('\n');
else
{
	i = 0;

	while (i < n)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
}
