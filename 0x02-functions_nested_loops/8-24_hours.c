#include "main.h"

/**
 *jack_bauer - prints using _putchar to stdout
 *Description: Using the jack_bauer function for args n
 *This program prints All minutes of Jack Bauer
 *Return: 0
 */

void jack_bauer(void)
{
int h = 0;
int mins = 0;
int h1 = 0;
int mins1 = 0;

while (h <= 23)
{
while (mins <= 59)
{
h1 = h % 10;
_putchar(h / 10 + '0');
_putchar(h1 + '0');
_putchar(':');
_putchar(mins / 10 + '0');
_putchar(mins1 + '0');
mins++;
_putchar('\n')
}
h++;
mins = 0;
}

}
