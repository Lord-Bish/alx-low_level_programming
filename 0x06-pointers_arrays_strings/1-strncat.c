#include "main.h"

/**
 * _strncat - function that concatenate using byte  number
 * @dest: destination string
 * @src: source string
 * @n: number
 * Return: A pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index] != '\0')
		index++;

	while (dest_len < n && src[dest_len] != '\0')
	{
	dest[index] = src[dest_len];
	index++;
	dest_len++;
	}

	return (dest);
}
