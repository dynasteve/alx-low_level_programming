#include "main.h"
/**
 *main - prints _putchar to stdout
 *Description: Using the print_alphabet function
 *This program prints a - z
 *Return: 0
 */

void print_alphabet(void)
{
char chara;
for (chara = 'a'; chara <= 'z'; chara++)
{
_putchar(chara);
}
_putchar('\n');
}
