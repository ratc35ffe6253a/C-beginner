#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		if (letter % 2 == 0)
		{
			putchar(letter);
		}
		letter--;
	}
	putchar('\n');

	return (0);
}
