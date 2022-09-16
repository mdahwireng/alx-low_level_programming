# include "main.h"

/**
 * _isdigit - checks if a given character is a digit
 * @c: The character which is being checked
 * Return: 1 if @c is a letter else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
