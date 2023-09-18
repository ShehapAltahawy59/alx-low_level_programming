#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: array
 * @n: number 
 * Return: none
 */

void print_array(int *a, int n)
{
	int *pointer = a, i;

	for (i = 0; i < n; i++)
	{
		
		printf("%d", *pointer);
		if (i < n - 1)
		{
			printf(", ");
		}
		pointer++;
	}
}
