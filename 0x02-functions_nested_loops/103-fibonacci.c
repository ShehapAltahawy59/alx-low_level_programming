#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	long int next, a = 1, b = 2, sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%ld\n", sum);
	return (0);
}
