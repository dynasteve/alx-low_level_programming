#include "main.h"

/**
 *print_to_98 - prints using _putchar to stdout
 *Description: Using the print_to_98 function
 *This program prints the numbers from n to 98
 *@n : First arguement
 *Return: 0
*/

void print_to_98(int n)
{
if (n > 98)
{
while(n >= 98)
{
_putchar(n);
_putchar(',');
_putchar(' ');
n--;
}
}
else if (n < 98)
{
while(n <= 98)
{
_putchar((n / 10) + '0');
_putchar(',');
_putchar(' ');
n++;
}
}

else
{
_putchar((n / 10) + '0');
}
}
