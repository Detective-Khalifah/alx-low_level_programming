#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - computes the last digit of an int, and prints it,
 * followed by:
 * "and is greater than 5", if it is greater than 5;
 * "and is 0", if it is equal to 0;
 * "and is less than 6 and not 0", if it is between
 * 6 and 0.
 * Return: 0 if successful.
 */
int main(void)
{
	int lastDigit, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
		printf("%s %d is %d %s\n", "Last digit of", n, lastDigit,
				"and is greater than 5");
	if (lastDigit == 0)
		printf("%s %d is %d %s\n", "Last digit of", n, lastDigit,
				"and is 0");
	if (lastDigit < 6 && lastDigit != 0)
		printf("%s %d is %d %s\n", "Last digit of", n, lastDigit,
				"and is less than 6 and not 0");

	return (0);
}

