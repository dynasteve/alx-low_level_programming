#include "main.h"
#include <stdlib.h>

/**
 *print_to_98 - prints using _putchar to stdout
*Description: Using the print_to_98 function
*This program prints the numbers from n to 98
*@n : First arguement
*Return: 0
*/

void print_to_98(int n)
{
int upper = 98;

if (n > upper)
{
while (n >= upper)
{
if (n != upper)
{
printf("%d%s", n, ", ");
}
else
{
printf("%d", n);
}
n--;
}
}
else
{
while (n <= upper)
{
if (n != upper)
{
printf("%d%s", n, ", ");
}
else
{
printf("%d", n);
}
n++;
}
}
putchar(10);
}
