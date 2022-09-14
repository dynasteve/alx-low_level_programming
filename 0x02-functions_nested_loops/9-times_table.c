#include "main.h"

/**
 *times_table - prints using _putchar to stdout
 *Description: Using the times_table function
 *This program prints the multiplication table till 9
 *Return: 0
*/

void times_table(void)
{
int num;
int multiplier;
int result;

for (num = 0; num <= 9; num++)
{
_putchar('0');

for (multiplier = 0; multiplier <= 9; multiplier++)
{
_putchar(',');
_putchar(' ');

result = num * multiplier;

if (result <= 9)
{
_putchar(' ');
}
else
{
_putchar((result / 10) + '0');
}

_putchar((result % 10) + '0');
}

_putchar('\n');
}
}
