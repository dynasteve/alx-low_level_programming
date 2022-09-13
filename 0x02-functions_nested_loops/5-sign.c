#include "main.h"
/**
 *print_sign - prints using _putchar to stdout
 *Description: Using the print_sign function for args n
 *@n: Is the used arguement
 *This program prints positive or negative prompts
 *Return: 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
