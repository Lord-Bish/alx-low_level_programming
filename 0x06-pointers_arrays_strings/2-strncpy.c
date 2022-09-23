#include "main.h"

/**
 * _strncpy - function that copies a certain length of string into the dest
 * @dest: Destination string
 * @src: Source string
 * @n: lenght
 * Return: Apointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
