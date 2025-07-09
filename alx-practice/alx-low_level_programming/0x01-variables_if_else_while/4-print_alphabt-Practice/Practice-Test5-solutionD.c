#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	int index = 1;

	while (letter <= 'z')
	{
		if (index == 2 || index == 3 || index == 5 || index == 7 ||
			index == 11 || index == 13 || index == 17 || index == 19 ||
			index == 23 || index == 25)
		{
			putchar(letter);
		}

		letter++;
		index++;
	}
	putchar('\n');

	return (0);
}
