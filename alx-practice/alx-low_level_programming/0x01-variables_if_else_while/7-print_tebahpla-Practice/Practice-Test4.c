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
		if (letter != 'x' && letter != 'c')
		{
			putchar(letter);
		}
		letter--;
	}
	putchar('\n');

	return (0);
}
