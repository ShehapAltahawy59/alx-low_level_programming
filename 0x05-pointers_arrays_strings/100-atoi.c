#include "main.h"

/**
 * _atoi - change str to int
 * @s:str
 * Return: 0
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-' && !started)
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0');
		}
		started = 1;
		int old_result = result;
		
		result = result * 10 + (*s - '0');
		if (old_result != 0 && result / old_result != 10)
		{
			return sign == -1 ? INT_MIN : INT_MAX;
		}
		else if (started)
		{
			break;
		}
		s++;
	}

	return sign * result;
}
