#include "main.h"

/**
 * more_numbers - prints 0 to 9, followed by a new line 10 times, follwed by a new line
 * Return: void
 */
void more_numbers(void)
{
        int h;

        for (h = 0; h < 10; h++)
        {
                int i;
                int j;
                int k;
                int n[20];

                for (i = 0; i < 10; i++)
                {
                        j = i + 48;
                        n[i] = j;

                        if (i < 5)
                        {
                                n[2*i + 10] = 49;
                                n[2*i + 11] = j;
                        }
                }

                for (k = 0; k < 20; k++)
                {
                	_putchar(n[k]);
                }
                _putchar('\n');
        }

}
