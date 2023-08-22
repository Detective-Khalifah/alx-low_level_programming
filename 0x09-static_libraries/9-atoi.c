#include "main.h"

/**
 * _atoi - dummy func.
 * @*s: the char to be processed.
 * Return: some int.
 */
int _atoi(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _atoi(s + 1);
	}
	return (0);
}

