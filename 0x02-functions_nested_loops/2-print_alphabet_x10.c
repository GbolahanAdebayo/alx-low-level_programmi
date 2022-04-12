#include "main.h"

/**
 * print_alphabet x10 - repeats the prints alphabet 10 times.
 * Returns: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 9; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
i}
