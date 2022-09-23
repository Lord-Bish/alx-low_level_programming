#include "main.h"

/**
 * rot13 - function that encode in rot13
 * @s: pointer to string first character's address
 * Return: encoded string in rot13
 */

char *rot13(char *s)
{
int i = 0;

int j;

char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (s[i] != '\0')
{
	j = 0;

	while (abc[j] != '\0')
	{
		if (s[i] == abc[j])
		{
			s[i] = rot13[j];
			break;
		}
		j++;
	}
	i++;
}
return (s);
}
