#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: 0 if successful.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d %s", n, "is positive");
	} else if (n < 0)
	{
		printf("%d %s", n, "is negative");
	} else
	{
		printf("%d %s", n, "is zero");
	}

	return (0);
}

