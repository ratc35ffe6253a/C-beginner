#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char LETTER = 'B';

	while (letter <= 'z' && LETTER <= 'Z')
	{
		putchar(letter);
		letter += 2;
		putchar(LETTER);
		LETTER += 2;
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
