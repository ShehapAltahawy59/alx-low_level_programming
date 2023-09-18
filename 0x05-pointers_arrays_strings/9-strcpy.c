#include "main.h"

/**
 * _strcpy - copy str
 * @src: string
 * @dest: dest
 * Return: add of dest
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return original_dest;
}
