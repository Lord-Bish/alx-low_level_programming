#include "main.h"

/**
 * swap_int - function that swap the value of the argument
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
int val = *a;
*a = *b;
*b = val;
}
