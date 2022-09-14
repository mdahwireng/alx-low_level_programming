# include "main.h"

/**
 * _isalpha - checks if a given character is a letter
 * @c: The character which is being checked
 * Return: 1 if @c is a letter else 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
