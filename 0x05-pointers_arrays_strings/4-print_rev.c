#include "main.h"

/**
 * print_rev - print rev
 * @s: string
 * Return: none
 */

void print_rev(char *s)
{
	char *pointer = s;
	int size=0;

	while (*pointer != '\0')
	{
		size++;
		pointer++;
	}
	pointer--;
	while (size != 0)
	{
		_putchar(*pointer);
		pointer--;
		size--;
	}
}
