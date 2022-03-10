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
	printf("Size of a char: %d\n", a);
	printf("Size of an int: %d\n", b);
	printf("Size of a long int: %d\n", c);
	printf("Size of long long int: %d\n", sizeof(d));
	printf("Size of float: %d\n", sizeof(e));

	return (0);
}
