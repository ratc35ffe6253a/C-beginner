#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Awas 0 (Success)
 */
int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter++);
	}
	putchar('\n');

	return (0);
}
