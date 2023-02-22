#include <stdio.h>

/**
 * main - prints sum of multiples of 3 & 5 below 1024.
 * Return: 0 if successful.
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);

}

