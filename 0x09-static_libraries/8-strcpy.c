#include "main.h"

/**
 * *_strcpy - dummy func.
 * @*dest: pointer to char?
 * @*src: pointer to another char?
 * Return: a copy of the char?
 */
char *_strcpy(char *dest, char *src)
{
	int longit = 0;

	if (*dest || *src)
	{
		longit++;
		longit += *_strcpy(dest + 1, src + 1);
	}
	return (0);
}

