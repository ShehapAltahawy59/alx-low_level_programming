#include "main.h"
/**
 * jack_bauer - print time
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour,minute;
	char h1,h2,m1,m2;

	for (hour = 0; hour < 24;hour++)
	{
		h1= '0' + hour / 10;
		h2= '0' + hour % 10;
		for(minute = 0;minute < 60;minute++)
		{
			m1 = '0' + minute / 10;
			m2 = '0' + minute % 10;
			_putchar(h1);
			_putchar(h2);
			_putchar(':');
			_putchar(m1);
			_putchar(m2);
			_putchar('\n');
		}
	}
}
