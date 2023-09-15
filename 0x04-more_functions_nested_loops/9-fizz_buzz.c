#include "main.h"
/**
 * main - entry
 * Return: none
 */

#include <stdio.h>

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			for (char *c = "FizzBuzz "; *c; c++) 
			{	
				_putchar(*c);
			}
		}
		else if (i % 3 == 0)
		{
			for (char *c = "Fizz "; *c; c++)
			{
				_putchar(*c);
			}
		} else if (i % 5 == 0)
		{
			for (char *c = "Buzz "; *c; c++)
			{
				_putchar(*c);
			}
		}
		else
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			_putchar(' ');
		}
	}
	_putchar('\n');
	return 0;
}
