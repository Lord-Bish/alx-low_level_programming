#include <stdio.h>
/**
 * main - print weird text
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		if (i % 5 == 0 && i % 3 != 0 && i != 100)
			printf("Buzz ");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%i ", i);
		if (i % 5 == 0 && i % 3 != 0 && i == 100)
			printf("Buzz");
		i++;
	}
	putchar('\n');
	return (0);
}
