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
	int i, is_prime;

	while (letter <= 'z')
	{
		is_prime = 1;

		if (index <= 1)
		{
			is_prime = 0;
		}
		else
		{
			for (i = 2; i * i <= index; i++)
			{
				if (index % i == 0)
				{
					is_prime = 0;
					break;
				}
			}
		}

		if (is_prime)
			putchar(letter);

		letter++;
		index++;
	}
	putchar('\n');

	return (0);
}
