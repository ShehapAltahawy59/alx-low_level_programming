#include "main.h"
/**
 * _strncat - conctainate
 * @dest: final string
 * @src: first string
 * @n: number of byte
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (n-- > 0 && *src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
