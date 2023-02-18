#include <stdio.h>

/**
 * main - entry point.
 * Print all possible combinations of comma-separated single-digit numbers,
 * followed by a newline.
 * Return: 0 if successful.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		if (num == 9)
		{
			putchar(' ');
			continue;
		}
		putchar(44);
		putchar(' ');
	}

	return (0);
}

