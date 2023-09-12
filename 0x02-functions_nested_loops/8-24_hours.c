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
			putchar(h / 10 + '0');
			putchar(h % 10 + '0');
			putchar(':');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			putchar('\n');
			m++;
		}
		h++;
		m = 0;
	}
}
