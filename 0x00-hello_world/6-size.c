#include <stdio.h>

/**
 * main - size of various data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	a = sizeof(char);
	b = sizeof(int);
	c = sizeof(long);
	d = sizeof(long long);
	e = sizeof(float);
	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));

	return (0);
}
