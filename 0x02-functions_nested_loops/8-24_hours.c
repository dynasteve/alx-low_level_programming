#include "main.h"

/**
 *jack_bauer - prints using _putchar to stdout
 *Description: Using the jack_bauer function for args n
 *This program prints All minutes of Jack Bauer
 *Return: 0
 */

void jack_bauer(void)
{
int a;
int b;
int c;
int d;

for (a = '0'; a <= '2'; a++)
{
for (b = '0'; b <= '9'; b++)
{
for(c = '0'; c <= '6'; c++)
{
for (d = '0'; d <= '9'; d++)
{
_putchar(d);
}
_putchar(c);
}
_putchar(b);
}
_putchar(a);
}
}
