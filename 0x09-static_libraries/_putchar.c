# include <stdio.h>
# include <string.h>

/**
 * printword - prints given word
 * Return: void
 */
void printword(char *word)
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

int main(void)
{
    printword("_putchar");
    return (0);
}
