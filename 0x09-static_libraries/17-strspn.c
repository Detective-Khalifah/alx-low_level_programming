#include "main.h"

/**
 * _strspn - dummy func.
 * @*dest: first char pointer.
 * @*src: second char pointer.
 * Return: an unsigned int. Have we had any of those before?
 */
unsigned int _strspn(char *s, char *accept)
{
	int longit = 0;

	if (*s || *accept)
	{
		longit++;
		longit += _strspn(s + 1, accept + 1);
	}
	return (0);
}

