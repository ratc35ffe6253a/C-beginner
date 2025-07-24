#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';
	char symbol = '*';

	while (letter >= 'a')
	{
		if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
		{
			putchar(symbol);
		}
		else
		{
			putchar(letter);
		}
		letter--;
	}
	putchar('\n');

	return (0);
}
		
