/* _strspn.c */
#include "main.h"
unsigned int _strspn(char *s, char *accept) {
    unsigned int length = 0;
    while (*s && _strchr(accept, *s++)) length++;
    return length;
}
