#include "main.h"
/**
 * jack_bauer - function print time
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hrs_remainder;
	int mins_remainder;

	int hrs = 0;
	int mins = 0;

	while (hrs <= 23)
	{
		while (mins <= 59)
		{
		hrs_remainder = hrs % 10;
		mins_remainder = mins % 10;
		_putchar(hrs / 10 + '0');
		_putchar(hrs_remainder + '0');
		_putchar(':');
		_putchar(mins / 10 + '0');
		_putchar(mins_remainder + '0');
		mins++;
		_putchar('\n');
		}
		hrs++;
		mins = 0;
	}
}
