#include "main.h"

/**
 *_islower - function check for lower case character
 *@c: is the int that for the argument of the function
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
