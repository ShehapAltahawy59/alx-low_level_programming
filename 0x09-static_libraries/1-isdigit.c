#include "main.h"
/**
 * _isdigit - check if digit
 * @c: the number is checked
 * Return: 1 if digit 0 other
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
