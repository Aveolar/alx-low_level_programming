#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Write a function that prints all natural numbers from n to 98.
 *
 * @c: add parameter
 * Return: void
 */
void print_to_98(int c)
{
	if (c > 98)
	{
		for (; c > 98; c--)
		{
			printf("%d, ", c);
		}
	}
	else if (c < 98)
	{
		for (; c < 98; c++)
		{
			printf("%d, ", c);
		}
	}
	printf("%d\n", c);
}
