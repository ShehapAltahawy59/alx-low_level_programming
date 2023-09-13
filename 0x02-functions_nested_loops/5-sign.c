/**
 * print_sign - check the value of number
 * @n: the number is checked
 * Return:  1 if positive 0 if zero -1 otherwise
 */


int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
