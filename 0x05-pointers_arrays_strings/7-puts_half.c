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
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	for (i = start+1; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
