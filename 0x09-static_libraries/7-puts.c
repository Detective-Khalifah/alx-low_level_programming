#include <stdio.h>

/**
 * _puts - entry point of C program.
 * @*s: the char pointer of the string to print.
 * Prints out a message to stdout.
 * Return: the integer value '0' if successful
 */
void _puts(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
	}
	puts(s);
	/* return (0); */
}
