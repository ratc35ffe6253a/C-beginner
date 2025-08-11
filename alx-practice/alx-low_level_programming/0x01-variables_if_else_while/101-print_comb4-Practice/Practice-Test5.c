#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b, c, i, isPrime;

	while (a <= 9)
	{
		b = a + 1;
		
		while (b <= 9)
		{
			isPrime = 1;
			i = 2;
			
			while (i <= b / 2)
			{
				if (b % i == 0)
				{
					isPrime = 0;
					break;
				}
				i++;
			}

			if (isPrime == 1)
			{
				c = b + 1;

				while (c <= 9)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					if (!(a == 6 && b == 7 && c == 9))
						{
							putchar(',');
							putchar(' ');
						}
					c++;
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
