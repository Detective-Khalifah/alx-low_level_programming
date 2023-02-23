#include "main.h"

/**
 * print_numbers - prints numerical chars 0 through 9.
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	putchar('\n');
}

