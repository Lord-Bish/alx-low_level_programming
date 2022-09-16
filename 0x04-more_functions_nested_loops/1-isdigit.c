#include "main.h"

/**
 * _isdigit - function that returns 1 if it is a digit
 *
 * @c: the argument of the function
 *
 * Return: Always 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
