#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'b' && letter != 'd' && letter != 'f' && letter != 'h' && letter != 'j' && letter != 'l' && letter != 'n' && letter != 'p' && letter != 'r' && letter != 't' && letter != 'v' && letter != 'x' && letter != 'z')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
