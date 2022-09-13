#include "main.h"

/**
 * print_alphabet_x10 - function prints alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int count, letter;
count = 0;
while (count < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
count++;
}
}
