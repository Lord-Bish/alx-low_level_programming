#include "main.h"

/**
 * more_numbers - function that print number multiple times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;

	int j = 0;

	while (j <= 9)
	{
		i = 0;

		while (i <= 14)
		{
			if ((i / 10) > 0)
			{
				_putchar((i / 10) + '0');
			}

			_putchar((i % 10) + '0');
		i++;
		}

	_putchar('\n');
	j++;
	}
}
