# include "main.h"
# include <math.h>

/**
 * _abs - computes the absolute value of a given integer
 * @n: The integer to be worked on
 * Return: The absolute value of n
 */
int _abs(int n)
{
	double abs;

	abs = sqrt(pow((double) n, 2));
	return ((int) abs);
}
