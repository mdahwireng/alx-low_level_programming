# include "main.h"
# include <stdio.h>

/**
 * print_to_98 - prints natural numbers from a given number to 98
 * @n: the given integer
 * Return: void
 */
void print_to_98(int n)
{
	printf("%d ", n);
	if (n > 98)
	{
		n--;
		for (; n > 98; n--)
		{
			printf(", %d", n);
		}
		printf(", 98");
	}
	else
	{
		if (n < 98)
	{
		n++;
		for (; n < 98; n++)
		{
			printf(", %d", n);
		}
		printf(", 98");
	}
	}
}
