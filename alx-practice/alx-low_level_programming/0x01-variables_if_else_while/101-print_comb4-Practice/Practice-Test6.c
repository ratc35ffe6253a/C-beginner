#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b, c, sum;
	int isPrime, divisor;
	int first = 1;

	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				isPrime = 1;
				divisor = 2;
				sum = a + c;


				while (divisor <= sum / 2)
				{
					if (sum % divisor == 0)
					{
						isPrime = 0;
						break;
					}
					divisor++;
				}

				if (isPrime == 1)
				{
					if (!(first))
					{
						putchar(',');
						putchar(' ');
					}

					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					first = 0;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
