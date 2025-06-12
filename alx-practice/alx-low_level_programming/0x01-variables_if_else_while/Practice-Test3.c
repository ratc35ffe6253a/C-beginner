#include <stdio.h>

/**
 * main - Enry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 11;

	if (n % 2 == 0)
	{
		printf("%d is even\n", n);
	}
	else
	{
		printf("%d is odd\n", n);
	}

	return (0);
}
