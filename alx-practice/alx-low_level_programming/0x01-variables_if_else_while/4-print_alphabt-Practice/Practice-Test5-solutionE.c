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
		if (letter == 'b' || letter == 'c' || letter == 'e' || letter == 'g' ||
			letter == 'k' || letter == 'm' || letter == 'q' || letter == 's' ||
			letter == 'w' || letter == 'y')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
