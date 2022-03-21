#include "main.h"

/**
 * swap_int - A function that swap values of two integers
 *
 * @a: 1st swap function parameter
 * @b: 2nd swap function parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
