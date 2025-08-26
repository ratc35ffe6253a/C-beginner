#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;
	int first = 1;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 3; num2 <= 99; num2 += 3)
		{
			if (!first)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');

			first = 0;
		}
	}
	putchar('\n');

	return (0);
}
