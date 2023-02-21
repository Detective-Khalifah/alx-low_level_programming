#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed
 * by a newline.
 */
main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

