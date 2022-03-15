#include "main.h"

/**
 * main - print lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
	_putchar('\n');

	return (0);
}
