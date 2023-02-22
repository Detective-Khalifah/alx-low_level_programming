#include "main.h"

/**
 * print_times_table - prints the 'n' times table, starting with 0.
 * @n: limit of table.
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	int r, c, prod;

	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
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

