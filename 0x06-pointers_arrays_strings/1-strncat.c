#include "main.h"
/**
 * strncat - conctainate
 * @dest: final string
 * @src: first string
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
