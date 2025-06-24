#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number = '0';
	char letter = 'a';

	while (number <= '9')
	{
		putchar(number++);
	}
	while (letter <= 'f')
	{
		putchar(letter++);
	}
	putchar('\n');

	return (0);
}
