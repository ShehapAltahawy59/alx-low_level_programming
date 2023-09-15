#include "main.h"

/**
 * main - entry
 * Return: zero
 */

void _putchar(char);

int main()
{
	int i;
	int j;
	char fizz[] = "Fizz ";
	char buzz[] = "Buzz ";
	char fizzbuzz[] = "FizzBuzz ";
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			for (j = 0; fizzbuzz[j] != '\0'; j++)
			{
				_putchar(fizzbuzz[j]);
			}
		}
		else if (i % 3 == 0)
		{
			for (j = 0; fizz[j] != '\0'; j++)
			{
				_putchar(fizz[j]);
			}
		}
		else if (i % 5 == 0)
		{
			for (j = 0; buzz[j] != '\0'; j++)
			{
				_putchar(buzz[j]);
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
	return (0);
}
