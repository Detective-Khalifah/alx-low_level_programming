#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by newline.
 * @n: the passed starting point of count.
 */
void print_to_98(int n)
{
	while (n <= 98 || n >= 98)
	{
		if (n == 98)
		{
			_putchar('\n');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			break;
		}

		if (n < 98)
		{
			if (n > 9)
				_putchar(n / 10 + '0');

			_putchar(n % 10 + '0');
			n++;
		}

		if (n > 98)
		{
			if (n > 9)
				_putchar(n / 10 + '0');

			_putchar(n % 10 + '0');
			n--;
		}

		_putchar(',');
		_putchar(' ');

	}

}

