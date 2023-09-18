#include "main.h"

/**
 * rev_string - rev string
 * @s: string
 * Return: none
 */

void rev_string(char *s)
{
	char *pointer1 = s;
	char *pointer2 = s + strlen(s)-1;
	char swap;

	while (pointer1 != pointer2)
	{
		swap = *pointer2;
		*pointer2 = *pointer1;
		*pointer1 = swap;
		pointer1++;
		pointer2--;
	}
}

