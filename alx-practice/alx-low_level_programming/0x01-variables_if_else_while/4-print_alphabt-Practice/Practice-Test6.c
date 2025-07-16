#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	int counter = 1;

	while (letter <= 'z')
	{
		if (counter % 4 != 0)
		{
			putchar(letter);
		}

		letter++;
		counter++;
	}
	putchar('\n');

	return (0);
}
