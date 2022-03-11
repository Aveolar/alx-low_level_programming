#include <stdio.h>

/**
 * main - print alphabet in lowercase excluding q & e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	d = 'a';

	while (d <= 'z')
	{
		if ((d != 'q') && (d != 'e'))
		{
			putchar(d);
		}
		d++;
	}
	putchar('\n');
	return (0);
}
