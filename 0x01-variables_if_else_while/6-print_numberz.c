#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	int g = 0;

	while (g < 10)

	{
		putchar(g + '0');
		g++;
	}
	putchar ('\n');
	return (0);
}
