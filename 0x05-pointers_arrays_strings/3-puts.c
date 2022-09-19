#include "main.h"

/**
 * _puts - fnction that immitate the puts functio
 * @str: string parameter
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
