#include "main.h"
/**
 * print_last_digit - function that print the last digit
 * @n: int that serve as the argument
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (result < 0)
	{
		result *= -1;
	}
	_putchar(result + '0');
	return (result);
}
