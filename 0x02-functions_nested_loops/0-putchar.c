#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 *
 * print_putchar - print
 */


#include <stdio.h>

/*function prototype*/
void print_putchar(void);

int main(void)
{
	print_putchar();
	return(0);
}

/*function definition*/
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
