#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by a new line
 * @s: The string to be printed
 * Return: void
 */
void print_rev(char *s)
{
    int i;

    i = 0;

    while (*(s + i)!='\0')
    {
        i++;
    }

    for (; i>=0; i--)
    {
        _putchar(s[i]);
    }
     _putchar('\n');
}
