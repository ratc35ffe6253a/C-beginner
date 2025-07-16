#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int is_fibonacci(int n)
{
	int a = 1, b = 1, temp;

	while (b <= n)
	{
		if (b == n)
		{
			return (1);
		}

		temp = b;
		b = a + b;
		a = temp;
	}
	return (0);
}

int main(void)
{
	char letter = 'a';
	int index = 1;

	while (letter <= 'z')
	{
		if (is_fibonacci(index))
		{
			putchar(letter);
		}

		letter++;
		index++;
	}
	putchar('\n');

	return (0);
}
