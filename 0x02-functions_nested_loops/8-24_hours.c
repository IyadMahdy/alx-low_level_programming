#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hours1, hours2, minutes1, minutes2;

	hours1 = 0;
	while (hours1 <= 2)
	{
		hours2 = 0;
		while (hours2 <= 9)
		{
			minutes1 = 0;
			while (minutes1 <= 5)
			{
				minutes2 = 0;
				while (minutes2 <= 9)
				{
					if (hours1 == 2 && hours2 == 4)
						return;
					_putchar(hours1 + '0');
					_putchar(hours2 + '0');
					_putchar(':');
					_putchar(minutes1 + '0');
					_putchar(minutes2 + '0');
					_putchar('\n');
					minutes2++;
				}
				minutes1++;
			}
			hours2++;
		}
		hours1++;
	}
}
