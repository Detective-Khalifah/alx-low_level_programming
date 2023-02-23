#include "main.h"

/**
 * print_numbers - prints numerical chars 0 through 9.
 */
void print_numbers(void)
{
	char num;

	for (num = 48; num < 57; num++)
	{
		_putchar(num + '0');
	}

	_putchar('\n');
}

