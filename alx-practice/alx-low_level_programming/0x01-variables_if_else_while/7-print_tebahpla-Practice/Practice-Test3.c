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
		if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u')
		{
			putchar(letter);
		}
		letter--;
	}
	putchar('\n');

	return (0);
}
