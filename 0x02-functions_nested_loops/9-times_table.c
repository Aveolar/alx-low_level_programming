#include <stdio.h>
#include "main.h"

/**
 * times_table - write a function that prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int tim, mlt, prod;

	for (tim = 0; tim < 10; tim++)
	{
		for (mlt = 0; mlt < 10; mlt++)
		{
			prod = (tim * mlt);

			if (mlt == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (prod > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
		}
		_putchar('\n');
	}
}
