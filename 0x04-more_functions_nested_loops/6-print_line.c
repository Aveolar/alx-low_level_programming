#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: print_line function parameter
 * Return: void
 */
void print_line(int n)
{
	char line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = '0'; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
