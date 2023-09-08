#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
    int i, j, k, m;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            for (k = i; k <= 9; k++)
            {
                for (m = (i == k ? j + 1 : 0); m <= 9; m++)
                {
                    putchar('0' + i);
                    putchar('0' + j);
                    putchar(' ');
                    putchar('0' + k);
                    putchar('0' + m);
                    if (!(i == 9 && j == 8 && k == 9 && m == 9))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    return (0);
}
