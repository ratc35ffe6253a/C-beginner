#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num % 2 != 0)
		{
			putchar(num + '0');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
