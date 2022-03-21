#include "main.h"

/**
 * _strlen - function that return the length of a string
 *
 * @s: _strlen function parameter
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}
