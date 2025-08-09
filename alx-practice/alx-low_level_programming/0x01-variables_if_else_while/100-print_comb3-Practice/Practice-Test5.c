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

	while (a <= 9)
	{
		if (a % 2 != 0)
		{
			b = a + 2;
			
			while (b <= 9)
			{
				if (b > a)
				{
					putchar(a + '0');
					putchar(b + '0');
					
					if (!(a == 7 && b == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				b++;
			}
		}
		a++;
	}
	putchar('\n');

	return (0);
}
