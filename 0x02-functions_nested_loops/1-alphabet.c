#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char lo;

	for (lo = 'a'; lo <= 'z'; lo++)
	{
		_putchar(lo);
	}
	_putchar('\n');
}
