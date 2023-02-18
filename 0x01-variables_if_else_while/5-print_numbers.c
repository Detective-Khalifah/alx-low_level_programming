#include <stdio.h>

/**
 * main - entry point.
 * Prints all single digit numbers of base 10 starting from 0,
 * followed by a newline char.
 * Return: 0 if successful.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}

