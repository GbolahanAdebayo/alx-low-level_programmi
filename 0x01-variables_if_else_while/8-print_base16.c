#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int y;

	for (y = 0; y < 16; y++)
	{
		printf("%d", y);
	}
	printf("\n");
	return (0);
}
