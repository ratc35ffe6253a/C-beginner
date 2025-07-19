#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	do {
		putchar(num + '0');
		num++;
	} while (num <= 9);
	putchar('\n');

	return (0);
}
