#include "main.h"

/**
 * print_most_numbers - function to print 0-9 excluding 2&4 followed by newline
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2')
			continue;
		else if (i == '4')
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
