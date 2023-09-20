#include "main.h"
/**
 * _strcat - concatinate string
 * @dest: final string
 * @src: first string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
