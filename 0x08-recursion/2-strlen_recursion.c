#include "main.h"
/**
 *_strlen_recursion - entry a function that returns the length of a string
 *
 *@s: string to evaluate
 *
 *Return: String length
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
