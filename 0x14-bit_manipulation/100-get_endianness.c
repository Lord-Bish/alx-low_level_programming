#include "main.h"
/**
 *get_endianness - this function checks foe endianness
 *Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
        unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
