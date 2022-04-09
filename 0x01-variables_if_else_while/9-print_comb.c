#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
int t;

for (t = '0'; t <= '9'; t++)
{
putchar(t);

if (t != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}


