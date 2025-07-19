#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 9;

	while (num >= 0)
	{
		putchar(num + '0');
		num--;
	}
	putchar('\n');

	return (0);
}
