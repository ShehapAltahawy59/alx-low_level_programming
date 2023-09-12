#include <stdio.h>
/**
 * print-alphabet - print from a to z
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
