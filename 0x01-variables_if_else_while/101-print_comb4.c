#include <stdio.h>

/**
 * main - Entry point
 *
 * a program that prints all possible different combinations of three digits
 * Return: Always 0 (success)
 */
int main(void)
{
int o;
int p;
int q;

for (o = 0; o < 10; ++o)
{
for (p = o + 1; p < 10; ++p)
{
for (q = p + 1; q < 10; ++q)
{
putchar('0' + o);
putchar('0' + p);
putchar('0' + q);

if (o != 7 || p != 8 || q != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}
