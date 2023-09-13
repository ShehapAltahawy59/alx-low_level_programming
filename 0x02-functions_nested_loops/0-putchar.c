#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 *
 * _putchar - print
 */
void print_putchar(void);

int main(void)
{
	print_putchar();
	return (0);
}

/**
 * print_putchar - Prints "_putchar" followed by a newline
 */
void print_putchar(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i])
		{
		putchar(str[i]);
		i++;
		}
		putchar('\n');
}
