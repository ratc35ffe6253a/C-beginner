#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';
	int count = 1;

	while (letter >= 'a')
	{
		if (count % 3 != 0)
		{
			putchar(letter);
		}
		letter--;
		count++;
	}
	putchar('\n');

	return (0);
}
