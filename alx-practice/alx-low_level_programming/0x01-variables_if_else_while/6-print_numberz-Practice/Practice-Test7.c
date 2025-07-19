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
		if (num != 4 && num != 7)
		{
			putchar(num + '0');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
