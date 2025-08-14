#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* Helper function to check if a number is prime */
int is_prime(int n)
{
    int i;
    if (n < 2)
        return (0);
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return (0);
    }
    return (1);
}

int main(void)
{
    int a = 0, b, c;
    int first = 1;

    while (a <= 7)
    {
        b = a + 1;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                if (is_prime(b) && is_prime(a + c))
                {
                    if (!first)
                        printf(", ");
                    printf("%d %d %d", a, b, c);
                    first = 0;
                }
                c++;
            }
            b++;
        }
        a++;
    }

    printf("\n");
    return (0);
}

