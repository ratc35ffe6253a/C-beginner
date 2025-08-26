#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 0;
	int num2;
	int first = 1;

	while (num1 <= 98)
	{
		num2 = num1 + 1;

		while (num2 <= 99)
		{
			/* Only loop when tens digits differ */
			if (num1 / 10 == num2 / 10)
			{
				num2++;
				continue;
			}

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
			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
