#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		if (num != '4' && num != '6')
		{
			putchar(num);
		}
		num++;
	}
	putchar('\n');

	return (0);
}
