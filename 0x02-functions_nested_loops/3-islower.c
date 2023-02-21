#include "main.h"

/**
 * _islower - checks if passed character (of English alphabet)
 * is in lowercase.
 * @c: a value of type char.
 * Return: 1 if parameter - c - is lowercase;
 * 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z)
	{
		return (1);
	} else
	{
		return (0);
	}

}

