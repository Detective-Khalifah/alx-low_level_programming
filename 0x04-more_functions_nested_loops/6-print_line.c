#include "main.h"

/**
 * print_line - print '_' @n times.
 * @n: number of times to print '_'.
 */
void print_line(int n)
{
	int time;

	if (n > 0)
	{
		for (time = 0; time < n; time++)
			putchar('_');
	}
	putchar('\n');
}

