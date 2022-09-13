#include "main.h"

/**
 * _isalpha - function that check wether c is a letter, lowercase or uppercase
 * @c: is the int that will be use for the argument of the fuunctuin
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
	return (0);
}
