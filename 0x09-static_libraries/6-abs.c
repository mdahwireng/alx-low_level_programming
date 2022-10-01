# include "main.h"
# include <math.h>

/**
 * _abs - computes the absolute value of a given integer
 * @n: The integer to be worked on
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}

