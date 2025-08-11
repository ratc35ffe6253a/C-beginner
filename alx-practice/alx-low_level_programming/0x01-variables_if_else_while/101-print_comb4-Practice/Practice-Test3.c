#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1;
	int b, c;
	int d = 15;

	while (a <= 9)
	{
		b = a + 1;

		while (b <= 9)
		{
			c = b + 1;

			while (c <= 9)
			{
				if (a + b + c == d)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					if (!(a == 4 && b == 5 && c == 6))
					{
						putchar(',');
						putchar(' ');
					}
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
