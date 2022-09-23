#include "main.h"

/**
 * string_toupper - function that convert string to uppercase
 * @n: source char pointer parameter
 * Return: Value of n
 */

char *string_toupper(char *n)
{
int i;

i = 0;

while (n[i] != '\0')
{
	if (n[i] >= 97 && n[i] <= 122)
	{
		n[i] -= 32;
	}
	i++;
}
