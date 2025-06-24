#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char LETTER = 'Z';

	while (LETTER >= 'A')
	{
		putchar(LETTER--);
	}
	putchar('\n');

	return (0);
}
