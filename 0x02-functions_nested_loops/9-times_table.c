#include "main.h"

/**
 * times_table - prints comma-separated 9 times table,
 * starting with 0.
 */
void times_table(void)
{
	int r, c;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			_putchar(r * c % 10 + '0');

			if (c == 9)
			{
				_putchar('\n');
				continue;
			}
			
			_putchar(',');
			_putchar(' ');
		}
	}
}

