#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main() {
    char str[] = "_putchar";
    int i = 0;
    while (str[i]) {
        putchar(str[i]);
        i++;
    }
    putchar('\n');
    return 0;
}
