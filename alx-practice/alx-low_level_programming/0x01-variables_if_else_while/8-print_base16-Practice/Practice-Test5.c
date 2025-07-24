#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num <= 9)
	{
		if (num != 2 && num != 6)
		{
			putchar(num + '0');
		}
		num++;
	}
	while (letter <= 'f')
	{
		if (letter != 'c' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
