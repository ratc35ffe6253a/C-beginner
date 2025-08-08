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
		if (a % 2 != 0) /* only odd numbers */
		{
			b = 1;
			while (b <= 9)
			{
				if (b % 2 != 0 && b != a) /* odd and not equal to a */
				{
					putchar(a + '0');  /* first digit */
					putchar(b + '0');  /* second digit */

					if (!(a == 9 && b == 7)) /* last combo: 97 */
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
