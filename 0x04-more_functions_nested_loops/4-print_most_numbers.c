#include "main.h"

/**
 * print_most_numbers - prints numerical chars 0 through 9
 * (with exception fo 2 & 4).
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
			putchar(num);
	}

	putchar('\n');
}

