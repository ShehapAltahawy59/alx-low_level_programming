#include "main.h"

/**
 * puts_half - print half
 * @str: string
 * Return: none
 */

void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		length = length / 2;
	}
	else
	{
		length = (length - 1) / 2;
	}

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
