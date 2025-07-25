#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int num = 0;
	
	while (i <= 9)
	{
		if (i % 2 != 0)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	while (num <= 9)
	{
		if (num % 2 == 0)
		{
			putchar(num + '0');
			if (num != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');

	return (0);
}
