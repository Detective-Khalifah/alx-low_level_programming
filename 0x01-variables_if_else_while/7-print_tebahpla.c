#include <stdio.h>

/**
 * main - entry point.
 * Print the (lowercase) English alphabet in reverse,
 * followed by a newline char.
 * Return: 0 if successful.
 */
int main(void)
{
	char eng;

	for (eng = 'z'; eng >= 'a'; eng--)
	{
		putchar(eng);
	}
	putchar('\n');

	return (0);
}

