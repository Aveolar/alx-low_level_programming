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
	int last_di;

	last_di = n % 10;

	return (last_di);
}
