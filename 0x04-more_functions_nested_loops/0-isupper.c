# include "main.h"

/**
 * _isupper - checks if a given character is a letter
 * @c: The character which is being checked
 * Return: 1 if @c is a letter else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
