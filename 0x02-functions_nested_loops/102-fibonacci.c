#include <stdio.h>
/** main - entry
 *
 * Return: 0
 */

int main(void)
{
    long int a = 1, b = 2, next;

    printf("%ld, %ld", a, b);
    for (int i = 3; i <= 50; i++)
	{
		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
