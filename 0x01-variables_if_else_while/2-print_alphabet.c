#include <stdio.h>

/**
 * main - entry point
 * Uses a for loop to print characters of the English alphabet
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

	return (0);
}

