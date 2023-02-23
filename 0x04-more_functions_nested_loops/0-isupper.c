#include "main.h"

/**
 * _isupper - checks for uppercase char.
 * Return: 1 if the (ASCII) character is uppercase;
 * 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

