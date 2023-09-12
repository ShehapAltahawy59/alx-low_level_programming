#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */


#include <stdio.h>

/*function prototype*/
void print_putchar();

int main() {
	print_putchar();
	return 0;
}

/*function definition*/
void print_putchar() {
	char str[] = "_putchar";
	int i = 0;
	while (str[i]) {
		putchar(str[i]);
		i++;
		}
		putchar('\n');
}
