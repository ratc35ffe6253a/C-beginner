#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b;
	int c;

	while (a <= 7) /* first digit max is 7 */
	{
		b = a + 1;
		while (b <= 8) /* second digit max is 8 */
		{
			c = b + 1;
			while (c <= 9) /* third digit max is 9 */
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (!(a == 7 && b == 8 && c == 9))
				{
					putchar(',');
					putchar(' ');
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
