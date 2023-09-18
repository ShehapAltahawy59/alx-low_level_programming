#include "main.h"

/**
 * print_array - print array
 * @a: array
 * @n: number 
 * Return: none
 */

void print_array(int *a, int n)
{
	int *pointer = a, i, v;

	for (i = 0; i < n; i++)
	{
		
		_putchar(*pointer, '0');
		_putchar(',');
		_putchar(' ');
		pointer++;
	}
}
