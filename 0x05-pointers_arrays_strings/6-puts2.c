#include "main.h"

/**
 * puts2 - print every 2
 * @str: string
 * Return: none
 */

void puts2(char *str)
{
	char *pointer = str;
	int num = 0;
	while (*pointer != '\0')
	{
		if (num % 2 == 0)
		{
			_putchar(*pointer);
		}
		pointer++;
		num++;
	}
	_putchar('\n');
}
