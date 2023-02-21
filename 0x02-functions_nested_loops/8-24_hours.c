#include "main.h"

/**
 * jack_bauer - prints every minute of the 24 hours in military time
 * -- 24 hours format.
 */
void jack_bauer(void)
{
	int hr, mins;

	for (hr = 0; hr < 24; hr++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour & 10 + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
		}
	}
}

