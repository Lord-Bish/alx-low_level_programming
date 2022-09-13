#include "main.h"

/**
 * print_sign - fnction that print the sign number
 * @n: int that is used as an argument
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
