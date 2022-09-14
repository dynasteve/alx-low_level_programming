#include "main.h"

/**
 *times_table - prints using _putchar to stdout
 *Description: Using the times_table function
 *This program prints the multiplication table till 9
 *Return: 0
 */

void times_table(void)
{
int number;
int multiplier;

for (number = '0'; number <= '9'; number++)
{
for (multiplier = '0'; multiplier <= '9'; multiplier++)
{
_putchar(number * multiplier);
if (multiplier != '9')
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('$');
_putchar('\n');
}
}
}
}
