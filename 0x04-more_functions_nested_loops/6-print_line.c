#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: print_line function parameter
 * Return: void
 */
void print_line(int n)
{
	char line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
