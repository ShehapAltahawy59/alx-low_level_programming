/* _strcat.c */
#include "main.h"
char *_strcat(char *dest, char *src) {
    char *start = dest;
    while (*dest) dest++;
    while (*src) *dest++ = *src++;
    *dest = '\0';
    return start;
}
