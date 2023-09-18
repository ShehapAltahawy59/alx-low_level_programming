#include "main.h"

/**
 * _strlen - get lenght of string
 * @s: pointer to string
 * Return: the length
 */

int _strlen(char *s)
{
	char *pointer = s;
	int len = 0;

	while (*pointer != '\0')
	{
		len++;
		pointer++;
	}
	return (len);
}
