#include "main.h"

/**
 * puts2 - print every 2
 * @str: string
 * Return: none
 */

void puts2(char *str)
{
	char *pointer = str;

	while (*pointer != '\0')
	{
		_putchar(*pointer);
		pointer+=2;
	}
}
