#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = '0';
	b = ',';
	c = ' ';

	while (a <= '9')
	{
		putchar(a);
		if (a != '9')
		{
			putchar(b);
			putchar(c);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
