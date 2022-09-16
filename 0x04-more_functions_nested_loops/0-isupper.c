#include "main.h"
/**
 * _isupper - functions that checks uppercase letter
 *
 * @let: an argument of the function
 *
 * Return: Always 0
 */

int _isupper(int let)
{
if (let >= 65 && let <= 90)
{
	return (1);
}
else
{
	return (0);
}
}
