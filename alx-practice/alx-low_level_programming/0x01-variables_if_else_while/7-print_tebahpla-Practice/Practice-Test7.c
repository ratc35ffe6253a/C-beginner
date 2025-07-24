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
		if (letter != 'c' && letter != 'o' && letter != 's' && letter != 'v' && letter != 'w' && letter != 'x' && letter != 'z')
		{
			putchar(letter);
		}
		letter--;
	}
	putchar('\n');

	return (0);
}
		
