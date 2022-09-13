#include "main.h"

/**
 * print_alphabet - function prints alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
