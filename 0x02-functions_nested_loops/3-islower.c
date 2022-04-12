#include "main.h"

/**
 * _islower - check for lowercase letter.
 * @c: character to check the case
 * Return: 0 or 1 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
