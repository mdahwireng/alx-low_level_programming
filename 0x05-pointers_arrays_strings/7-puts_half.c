#include <stdio.h>
#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @s: The sting to be printed
 * Return: void
 */
void puts_half(char *str)
{
    int i,j;

    i = 0;

    while (*(str + i) != '\0')
    {
        i++;
    }

    if (i%2 != 0)
    {
        j = (i - 1)/2;
    }
    else
    {
        j = i/2;
    }

    while (j <= i)
        {
            _putchar(*(str + j));
            j++;
        }
        _putchar('\n');
}
