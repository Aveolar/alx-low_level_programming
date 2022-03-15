#include <stdio.h>
#include "main.h"

/**
 * _islower - write a function that checks for lowercase char
 * @c: parameter for the _islower function
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
