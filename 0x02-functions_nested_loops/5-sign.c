# include "main.h"

/**
 * print_sign - prints the sign of a given integer
 * @n: The integer to be checked
 * Retrun: 1 if n > 0 , 0 if n is 0 or -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	putchar('+');
	return (1);
	}
	else
	{
		if (n == 0);
		{
		putchar('0');
		return (0);
		}
		else
		{
		putchar('-');
		return (-1);
		}
	}
}
