#include "main.h"
/**
 *main - prints _putchar to stdout
 *Description: Using the main function
 *This program prints a - z
 *Return: 0
 */

int print_alphabet(void)
{
char chara;
for(chara = 'a'; chara <= 'z'; chara++)
{
_putchar(chara);
}
_putchar('\n');

return (0);
}
