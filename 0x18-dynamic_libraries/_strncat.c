/* _strncat.c */
#include "main.h"
char *_strncat(char *dest, char *src, int n) {
    char *start = dest;
    while (*dest) dest++;
    while (n-- && *src) *dest++ = *src++;
    *dest = '\0';
    return start;
}
