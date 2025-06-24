#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number = '0';

	while (number <= '9')
	{
		if (number != '9')
		{
			putchar(number);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(number);
		}
		number++;
	}
	putchar('\n');

	return (0);
}
