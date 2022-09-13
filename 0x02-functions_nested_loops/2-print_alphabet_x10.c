#include "main.h"
/**
 *print_alphabet_x10 - prints using _putchar to stdout
 *Description: Using the print_alphabet_x10 function
 *This program prints a - z 10 times
 *Return: 0
 */

void print_alphabet_x10(void)
{
int x;
int y;

for (x = 1; x <= 10; x++){
for (y = 'a'; y <= 'z'; y++)
{
_putchar(y);
}
_putchar('\n');
}
}
