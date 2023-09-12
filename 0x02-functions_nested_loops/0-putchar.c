#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 *
 * _putchar - print
 */


#include <stdio.h>

/*function prototype*/
void print_putchar(void);

int main(void)
{
	_putchar();
	return (0);
}

/**
 * _putchar - Prints "_putchar" followed by a newline
 */
void _putchar(void)
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
