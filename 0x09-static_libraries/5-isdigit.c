#include "main.h"

/**
 * _isupper - checks for numerical char.
 * @c: the char to be checked.
 * Return: 1 if the (ASCII) character - @c - is numberical (0-9);
 * 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

