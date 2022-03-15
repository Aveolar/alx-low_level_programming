#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - write a function that prints every minute from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hrs;
	int min;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + (hrs / 10));
			_putchar('0' + (hrs % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
