#include "main.h"

/**
 * _isupper - write a function that checks for uppercase char;
 *
 * @c: _isupper function parameter;
 * Return: 1 if uppercase or 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
