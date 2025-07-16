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
		if (LETTER == 'A' || LETTER == 'E' || LETTER == 'I' || LETTER == 'O' || LETTER == 'U')
		{
			LETTER--;
			continue;
		}

		putchar(LETTER);
		putchar(' ');
		LETTER--;
	}
	putchar('\n');

	return (0);
}
