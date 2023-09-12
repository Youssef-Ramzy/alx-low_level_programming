#include "main.h"


/**
 * jack_bauer- prints every minute of the day
*/


void jack_bauer(void)
{
	int h = 0, m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			putchar(hour / 10 + '0');
			putchar(hour % 10 + '0');
			putchar(':');
			putchar(minute / 10 + '0');
			putchar(minute % 10 + '0');
			putchar('\n');
			m++;
		}
		h++;
		m = 0;
	}
}
