#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a = 0, b, c;

    while (a <= 8)
    {
        b = 1;
        while (b <= 9)
        {
            c = 0;
            while (c <= 9)
            {
                putchar(a + '0');
                putchar(b + '0');
                putchar(c + '0');

                if (!(a == 8 && b == 9 && c == 9))
                {
                    putchar(',');
                    putchar(' ');
                }
                c += 3;
            }
            b += 2;
        }
        a += 2;
    }
    putchar('\n');
    return (0);
}

