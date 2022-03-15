#include <stdio.h>
#include "main.h"

/**
 * _abs - write a function that compute the absolute value of an integer.
 *
 * @n: parameter for the _abs function
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
