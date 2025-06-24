#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char LETTER = 'A';

	while (letter <= 'z')
	{
		putchar(letter++);
	}

	while (LETTER <= 'Z')
	{
		putchar(LETTER++);
	}
	putchar('\n');

	return (0);
}
