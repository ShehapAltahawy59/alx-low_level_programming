#include "main.h"

/**
 * _puts - print
 * @str: the string
 * Return: none
 */

void _puts(char *str)
{
	char *pointer = str;

	while (*pointer != '\0')
	{
		_putchar(*pointer);
		pointer++;
	}
	_putchar('\n');
}
