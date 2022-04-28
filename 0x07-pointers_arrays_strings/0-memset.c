#include "main.h"

/**
 * _memset - A function that fills the memory with a constant byte.
 *
 * @s: the memory area that would be returned
 * @b: constant byte
 * @n: size of the bytes
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
       
         i = 0;

	while (i < n)
	{

		*(s + i) = b;
		i += 1;
	}
	return (s);
}
