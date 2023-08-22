#include "main.h"

/**
 * _abs - computes the absolute value of an int.
 * @n: the int to be computed.
 * Return: the absolute value.
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

