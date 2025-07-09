#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int is_prime(int num)
{
	if (num <= 1)
		return 0;

	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	char letter = 'a';
	int index = 1;

	while (letter <= 'z')
	{
		if (is_prime(index))
			putchar(letter);

		letter++;
		index++;
	}
	putchar('\n');

	return (0);
}
