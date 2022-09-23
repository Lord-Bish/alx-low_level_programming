#include "main.h"

/**
 * cap_string - function that print the capital letter of a world
 * @s: pointer variable
 * Return: Array of characters
 */

char *cap_string(char *s)
{
int i;
int j;

char p[] = " \t\n,;.!\?\"(){}";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; p[j] != '\0'; j++)
	{
		if (s[i] == p[j])
		{
			if (s[i + 1] > 96 && s[i + 1] < 123)
			{
			s[i + 1] = s[i + 1] - 32;
			}
		}
		else if (i == 0)
		{
			if (s[i] > 96 && s[i] < 123)
			{
			s[i] = s[i] - 32;
			}
		}
	}
}
return (s);
}
