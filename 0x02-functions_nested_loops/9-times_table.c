#include "main.h"
/**
 * times_table - print 9 time table
 *
 * Return: void
 */


void times_table(void)
{
	int i, j;
	char tens, ones;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			tens = '0' + (i * j) / 10;
			ones = '0' + (i * j) % 10;
			if (j != 0 && tens == '0')
			{
				_putchar(' ');
			}
			else if (j != 0)
			{
				_putchar(tens);
			}
			_putchar(ones);
			if (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
