# include "main.h"
# include <stdio.h>

/**
 * print_to_98 - prints natural numbers from a given number to 98
 * @n: the given integer
 * ReturnsK void
 */
void print_to_98(int n)
{
	printf("%d",n);
	if (n > 98)
	{
		for (n; n > 98; n--)
		{
			printf(", %d", n);
		}
	}
	else
	{
		for (n; n < 98; n++)
		{
                        printf(", %d", n);
		}
	}
	printf(", 98");
}
