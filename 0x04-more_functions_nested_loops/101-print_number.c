#include "main.h"

/**
 * print_number - prints a number.
 * @n: the number to print.
 */
void print_number(int n)
{
	if (n > 99)
	{
		_putchar(n / 100 + '0');
		_putchar(n % 100 + '0');
	}
	if (n > 9 && n < 99)
		_putchar(n / 10 + '0');

	_putchar(n % 10 + '0');
}

