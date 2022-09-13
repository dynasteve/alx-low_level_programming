#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - prints using _putchar to stdout
 *Description: Using the print_last_digit function for args n
 *@n: Is the used arguement
 *This program prints last digit of an interger
 *Return: 0
 */

int print_last_digit(int n)
{
int x = abs(n) % 10;

if (x < 0)
{
x *= -1;
}

_putchar(x + '0');

return (x);
}
