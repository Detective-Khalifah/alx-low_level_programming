#include <stdio.h>

/**
 * main - Fizz-Buzz Test.
 * Return: 0 if successful.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d ", i);
			continue;
		}
		if (i % 3 == 0 && i % 5 != 0)
			printf("%s ", "Fizz");
		if (i % 3 != 0 && i % 5 == 0)
			printf("%s ", "Buzz");
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s ", "FizzBuzz");
	}

	putchar('\n');

	return (0);
}

