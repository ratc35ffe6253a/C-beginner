#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int primes[] = {2, 3, 5, 7};
    int i = 0;
    int j;

    while (i < 4) /* loop over prime digits */
    {
        j = i + 1;

        while (j < 4) /* ensure ascending order */
        {
            putchar(primes[i] + '0');
            putchar(primes[j] + '0');

            if (!(i == 2 && j == 3)) /* last pair is (7, 7)? No — last is (7) but ascending so (7) can't be with itself — actually last is (7)?? No, last pair is (7 with nothing) so previous one is (5,7) -> i==2 && j==3 */
            {
                putchar(',');
                putchar(' ');
            }

            j++;
        }

        i++;
    }

    putchar('\n');
    return (0);
}

