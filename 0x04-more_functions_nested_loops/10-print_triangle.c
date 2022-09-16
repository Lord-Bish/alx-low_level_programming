#include "main.h"
/**
 * print_triangle - Print triangles.
 *
 * @size: triangle size parameter.
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 1; j <= size; j++)
			{
				if (j < (size - i))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
