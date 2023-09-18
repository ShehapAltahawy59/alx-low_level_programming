#include "main.h"

/**
 * swap_int - swap value of two int
 * @a: first int
 * @b: second int
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
