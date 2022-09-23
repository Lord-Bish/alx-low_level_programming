#include "main.h"

/**
 * _strcat - function that print the result after concatenation
 * @dest: destination string
 * @src: source string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int dcount = 0;
	int scount = 0;

	while (dest[dcount] != '\0')
		dcount++;

	while (src[scount] != '\0')
	{
		dest[dcount] = src[scount];
		scount++;
		dcount++;
	}

	dest[dcount] = '\0';

	return (dest);
}
