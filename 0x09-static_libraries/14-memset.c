#include "main.h"

/**
 * *_memset - dummy func.
 * @*s: first char pointer.
 * @b: second is a char.
 * @n: some unsigned int, hmm...
 * Return: a char. Give me a break!
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (*s || b == 'a')
	{
		n++;
	}
	return (0);
}

