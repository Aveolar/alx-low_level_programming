#include <stdio.h>
#include "main.h"

/**
 * _islower - write a function that checks for lowercase char
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
