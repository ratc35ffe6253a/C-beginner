#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 8)
		{
			int square = i * i;
			int tens = square / 10;
			int ones = square % 10;

			/* Print the tens digit only if square ≥ 10 */
			if (square >= 10)
				putchar(tens + '0');

			/* Always print the ones digit */
			putchar(ones + '0');

			/* Add comma and space unless it's the last number (81 from 9) */
			if (i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}

	putchar('\n');
	return (0);
}
