#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to capitalize
 *
 * Return: Pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z') &&
(i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t'
|| s[i - 1] == '\n' || s[i - 1] == ','
|| s[i - 1] == ';' || s[i - 1] == '.'
|| s[i - 1] == '!' || s[i - 1] == '?'
|| s[i - 1] == '"' || s[i - 1] == '('
|| s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'))
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
