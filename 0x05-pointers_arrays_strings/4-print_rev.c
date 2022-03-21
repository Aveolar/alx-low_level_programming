#include "main.h"

/**
 * print_rev - functions that print a string in reverse followed by a newline
 *
 * @s: print_rev function parameter
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
