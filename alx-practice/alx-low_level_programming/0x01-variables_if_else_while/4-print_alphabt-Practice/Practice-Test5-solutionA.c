#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* Function to check if a number is prime */
bool is_prime(int num)
{
	if (num <= 1)
		return false;

	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int main(void)
{
	char letter = 'a';
	int index = 1;

	while (letter <= 'z')
	{
		if (is_prime(index))
		{
			putchar(letter);
		}
		letter++;
		index++;
	}
	putchar('\n');

	return (0);
}
