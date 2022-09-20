#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: the string to find the length
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
