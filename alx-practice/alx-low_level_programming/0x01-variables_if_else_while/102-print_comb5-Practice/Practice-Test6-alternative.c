#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t1, u1; /* tens and ones for first number */
	int t2, u2; /* tens and ones for second number */
	int first = 1;

	for (t1 = 0; t1 <= 9; t1++)
	{
		for (u1 = 0; u1 <= 9; u1++)
		{
			for (t2 = t1 + 1; t2 <= 9; t2++) /* tens strictly larger */
			{
				for (u2 = u1 + 1; u2 <= 9; u2++) /* ones strictly larger */
				{
					if (!first)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(t1 + '0');
					putchar(u1 + '0');
					putchar(' ');
					putchar(t2 + '0');
					putchar(u2 + '0');
					first = 0;
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
