#include <stdio.h>
#include "main.h"
/**
 * puts2 - a function that prints every other character of a string, starting with the first character, followed by a new line
 * @s: The string to be printed
 * Return: void
 */
void puts2(char *str)
{
    int i,j;

    i = 0;

    while (*(str + i)!='\0')
    {
        i++;
    }

    j=0;
    while(j <= i)
    {
        _putchar(*(str + j));
        j = j + 2;
    }
    _putchar('\n');
}
