#include "main.h"

/**
 * times_table - prints comma-separated 9 times table,
 * starting with 0.
 */
void times_table(void)
{
	int r, c = 0;

	for (r = 0; r <= 9; r++)
	{
		_putchar(r * c + '0');

		if (r == 9)
		{
			_putchar('\n');
			continue;
		}

		_puchar(',');
		_putchar(' ');
}

