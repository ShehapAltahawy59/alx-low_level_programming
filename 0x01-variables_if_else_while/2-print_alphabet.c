#include <stdio.h>
/**
 * main - entry point
 *
 * Retyrn: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');

	return (0);
}
