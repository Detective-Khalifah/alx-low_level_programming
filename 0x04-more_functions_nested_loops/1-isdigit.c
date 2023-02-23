#include "main.h"

/**
 * _isdigit - Checks if a character is numeric.
 * @c: the passed char.
 * Return: 1 if @c is numberic;
 * 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

