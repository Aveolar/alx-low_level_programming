#include <stdio.h>

/**
 * main - Numberz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t;

	t = '0';
	while (t <= '9')
	{
		putchar(t);
		t++;
	}
	putchar('\n');
	return (0);
}
