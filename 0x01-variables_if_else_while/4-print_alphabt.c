#include <stdio.h>

/**
 * main - prints alphabets excepts q and e
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
