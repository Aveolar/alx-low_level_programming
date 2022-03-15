#include <stdio.h>

/**
 * main - Lowercase Alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int low;

	low = 'a';
	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
