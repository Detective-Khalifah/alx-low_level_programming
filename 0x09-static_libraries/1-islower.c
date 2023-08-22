#include "main.h"
/**
* _islower - checks for lowercase char.
* @c: the char to be checked.
* Return: if the (ASCII) character is lowercase;
 * 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

