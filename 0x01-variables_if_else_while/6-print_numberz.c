#include <stdio.h>

/**
 * main - entry point.
 * Prints all single digit numbers of base 10 starting from 0,
 * followed by a newline character (using the putchar function.)
 * Return: 0 if successful.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}

