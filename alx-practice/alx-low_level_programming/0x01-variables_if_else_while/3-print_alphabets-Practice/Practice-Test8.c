#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	int counter = 0;

	while (letter <= 'z')
	{
		if (counter % 2 == 0)
		{
			putchar(tolower(letter));
			putchar(' ');
		}
		else
		{
			putchar(toupper(letter));
			putchar(' ');
		}
		letter++;
		counter++;
	}
	putchar('\n');

	return (0);
}
