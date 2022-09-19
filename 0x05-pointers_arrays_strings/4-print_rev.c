#include "main.h"

/**
 * print_rev - function that print the reverse of a  given string
 *
 * @s: parameter holding string value
 */

void print_rev(char *s)
{
int counter = 0;

int ldigit;

while (s[counter] != '\0')
{
counter++;
}
ldigit = counter - 1;

while (ldigit >= 0)
{
_putchar(s[ldigit]);
ldigit--;
}
_putchar('\n');
}
