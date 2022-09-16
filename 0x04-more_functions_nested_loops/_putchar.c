# include <stdio.h>
# include <string.h>

/**
 * _putchar - prints given word
 * @word: word to be printed
 * Return: void
 */
void _putchar(char *word)
{
    int i;
    int len;

    len = strlen(word);

    for (i = 0; i < len; i++)
    {
    putchar(word[i]);
    }
    putchar('\n');
}
