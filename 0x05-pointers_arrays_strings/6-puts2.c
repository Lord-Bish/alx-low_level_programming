#include "main.h"

/**
 * puts2 - function that print in twos i.e evn number
 * @str: value of the string
 */

void puts2(char *str)
{
int count = 0;

while (str[count] != '\0')
{
	if (count % 2 == 0)
	{
		_putchar(str[count]);
	}

	count++;
}
_putchar('\n');
}
