#include <stdio.h>
#include "main.h"

/**
 * _isalpha - write a function that check for alphabetic character
 *
 * @c: parameter for the _isalpha function
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
