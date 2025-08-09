#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1;
	int b;
	int c = 10;

	while (a <= 9)
	{
		b = 0;
		
		while (b <= 9)
		{
			if (b != a && b > a && b + a == c)
			{
				putchar(a + '0');
				putchar(b + '0');

				if (!(a == 4 && b == 6))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
