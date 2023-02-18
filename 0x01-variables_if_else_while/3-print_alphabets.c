#include <stdio.h>

/**
 * main - entry point
 * Uses a for loop to print characters of the English alphabet,
 * in lowercase followed immediately by uppercase,
 * using the putchar function.
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

