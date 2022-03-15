#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - write a function that prints the last digit of a number
 *
 * @n: parameter for the _abs function
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n %= 10;
	}
	else
	{
		n = (n % 10) * -1;
	}

	_putchar(n + '0');
	return (n);
}
