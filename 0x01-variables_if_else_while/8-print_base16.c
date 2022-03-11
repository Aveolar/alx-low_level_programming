#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, a_to_f;

	c = '0';
	a_to_f = 'a';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	while (a_to_f <= 'f')
	{
		putchar(a_to_f);
		a_to_f++;
	}

	putchar('\n');

	return (0);
}
