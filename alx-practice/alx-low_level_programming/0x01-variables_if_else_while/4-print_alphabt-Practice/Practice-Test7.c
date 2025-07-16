#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';
	int counter = 1;

	while (letter >= 'a')
	{
		if (counter % 3 != 0)
		{
			putchar(letter);
			putchar(' ');
		}

		letter--;
		counter++;
	}
	putchar('\n');

	return (0);
}
