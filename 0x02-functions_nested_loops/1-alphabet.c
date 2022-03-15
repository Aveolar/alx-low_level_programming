#include "main.h"

/**
 * main - print lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a', low <= 'z', low++)
	{
		_putchar(low);
	}

	return (0);
}
