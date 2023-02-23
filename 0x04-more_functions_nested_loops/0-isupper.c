#include "main.h"

/**
 * _isupper - checks for uppercase char.
 * Return: 1 if the (ASCII) character is uppercase;
 * 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(c + '0');
		_putchar(':');
		_putchar(' ');
		_putchar(49);
		return (1);
	}
	_putchar(c + '0');
	_putchar(':');
	_putchar(' ');
	_putchar(48);
	return (0);
}

