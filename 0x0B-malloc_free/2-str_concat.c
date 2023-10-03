#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	concat_str = malloc(sizeof(char)* (strlen(s1) + strlen(s2) + 1));
	len = strlen(s1) + 1;
	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[index] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[len++] = s2[index];

	return (concat_str);
}
