#include "main.h"

/**
 * _abs - function that computhe the absolute value
 * @c: int that act asargument
 * Return: Always 0 (Success)
 */

int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
else
{
return (c * -1);
}
}
