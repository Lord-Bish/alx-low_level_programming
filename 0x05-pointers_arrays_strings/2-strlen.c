#include "main.h"

/**
 * _strlen - function that print the lenght of a string
 * @s: string to be printed
 * Return: Always 0
 */

int _strlen(char *s)
{
int count = 0;

while (*s++)
	count++;

return (count);
}
