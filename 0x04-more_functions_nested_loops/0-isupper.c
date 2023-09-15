#include "main.h"
/**
 * _isupper - check if upper
 * @c: char is checked
 * Return: 1 if char 0 other
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	} else
	{
		return 0;
	}
}
