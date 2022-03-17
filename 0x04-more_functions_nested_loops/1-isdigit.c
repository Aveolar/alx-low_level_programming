#include "main.h"

/**
 * _isdigit - write a function that checks for a digit (0 through 9).
 *
 * @c: _isdigit function parameter
 * Return: 1 if true && 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
