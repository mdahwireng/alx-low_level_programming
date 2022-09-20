#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int h = *a;
	*a = *b;
	*b = h;

}
