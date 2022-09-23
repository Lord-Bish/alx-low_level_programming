#include "main.h"

/**
 * reverse_array - function that reverses the content of an array integer
 * @a: array to be reversed
 * @n: numbers of content in an array
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int d;

	d = n - 1;
	i = 0;

	while (i < d)
	{
		tmp = a[i];
		a[i] = a[d];
		a[d] = tmp;
		i++;
		d--;
	}
}
