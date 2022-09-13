# include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 * Return: zero
 */
int print_alphabet(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
