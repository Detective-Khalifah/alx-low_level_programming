#include "main.h"

/**
 * times_table - prints comma-separated 9 times table,
 * starting with 0.
 */
void times_table(void)
{
	int r, c, prod;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			prod = r * c;

			if (prod > 9)
				_putchar(prod / 10 + '0');
			else if (prod <= 9 && c > 0)
				_putchar(' ');

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

