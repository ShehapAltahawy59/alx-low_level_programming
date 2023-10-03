#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *cp;
	int index;

	if (str == NULL)
		return (NULL);
	cp = malloc(sizeof(char) * (strlen(str) + 1));
	if (cp == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		cp[index] = str[index];
	}

	cp[index] = '\0';

	return (cp);

}
