#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDig = n % 10;

	if (lastDig > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastDig);
	}
	if (lastDig == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastDig);
	}
	if (lastDig < 6 && lastDig != 0)
	{
		printf("last digit of %d is %d and is less than 6and not 0\n", n, lastDig);
	}
	return (0);
}