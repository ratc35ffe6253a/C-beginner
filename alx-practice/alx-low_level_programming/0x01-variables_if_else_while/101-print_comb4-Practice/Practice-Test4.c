#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b, c;

	while (a <= 9)
	{
		if (a % 2 == 0)
		{
			b = a + 2;
			
			while (b <= 9)
			{
				if (b % 2 == 0)
				{
					c = b + 2;

					while (c <= 9)
					{
						if (c % 2 == 0)
						{
							putchar(a + '0');
							putchar(b + '0');
							putchar(c + '0');

							if (!(a == 4 && b == 6 && c == 8))
							{
								putchar(',');
								putchar(' ');
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
	putchar('\n');

	return (0);
}
