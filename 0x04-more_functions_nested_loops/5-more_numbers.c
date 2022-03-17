#include "main.h"

/**
 * more_numbers - function that print 0-14 10times followed by newline
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;
	char i;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
