#include "main.h"

/**
 * _isalpha - checks if passed character is alphabetic.
 * @c: the passed char.
 * Return: 1 if param is alphabetic; 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}

	return (0);
}

