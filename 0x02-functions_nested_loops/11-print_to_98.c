/** #include "main.h" */
#include <stdio.h>

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
			printf("%d\n", n);
			return;
		}

		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}

		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}

	}

}

