#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* Function to check if a number is prime */
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
    int a = 1, b, c;
    int first = 1;

    while (a <= 9)
    {
        if (a % 2 != 0)
        {
            b = a + 1;
            while (b <= 9)
            {
                if (b % 2 != 0)
                {
                    c = b + 1;
                    while (c <= 9)
                    {
                        if (c % 2 != 0)
                        {
                            if (is_prime(a + b + c))
                            {
                                if (!first)
                                    printf(", ");
                                printf("%d %d %d", a, b, c);
                                first = 0;
                            }
                        }
                        c++;
                    }
                }
                b++;
            }
        }
        a++;
    }

    printf("\n");
    return (0);
}

