#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char LETTER = 'A';

	while (LETTER <= 'Z')
	{
		putchar(LETTER++);
	}
	putchar('\n');

	return (0);
}
