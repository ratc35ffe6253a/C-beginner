#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'z')
		{
			putchar(letter);
			putchar(' ');
		}
		else if (letter == 'z')
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
