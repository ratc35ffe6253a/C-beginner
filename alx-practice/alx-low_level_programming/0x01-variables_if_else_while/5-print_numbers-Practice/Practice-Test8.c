#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int i;

	for (i = 0; i < 5; i++)
	{
		putchar(a + '0');
		putchar(b + '0');
	}
	putchar('\n');

	return (0);
}
