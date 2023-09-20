#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: The string to be converted
 *
 * Return: A pointer to the converted string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}

	return (s);
}
