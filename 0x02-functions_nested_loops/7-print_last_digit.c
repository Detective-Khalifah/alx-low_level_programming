#include "main.h"

/**
 * print_last_digit - prints the last digit of an int.
 * @num: the int to be computed.
 * Return: value of the last digit.
 */
int print_last_digit(int num)
{
	int lastDigit = num % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');

	return (lastDigit);

}

