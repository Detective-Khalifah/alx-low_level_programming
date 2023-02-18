#include <stdio.h>

/**
 * main - entry point.
 * prints the English alphabet in lowercase (with the exception of q & e),
 * followed by a newline.
 * Return: 0 if successful.
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');

	return (0);
}

