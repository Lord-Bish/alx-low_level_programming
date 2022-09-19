#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: value
 */

void rev_string(char *s)
{
	int i, j, val;

	i = 0;

	while (s[i] != '\0')
		i++;

	i--;

	j = 0;

	while (j < i)
	{
		val = s[i];
		s[i] = s[j];
		s[j] = val;
		i--;
		j++;
	}
}
