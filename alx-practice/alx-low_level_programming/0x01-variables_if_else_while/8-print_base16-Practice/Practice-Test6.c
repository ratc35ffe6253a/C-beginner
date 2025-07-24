#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 9;
	char letter = 'f';

	while (letter >= 'a')
	{
		if (letter != 'b' && letter != 'd')
		{
			putchar(letter);
		}
		letter--;
	}
	while (num >= 0)
	{
		if (num != 3 && num != 7 && num != 8)
		{
			putchar(num + '0');
		}
		num--;
	}
	putchar('\n');

	return (0);
}
