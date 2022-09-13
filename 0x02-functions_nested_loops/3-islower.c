#include "main.h"
#include <ctype.h>
/**
 *_islower - prints using _putchar to stdout
 *Description: Using the _islower function for c
 *@c: Is the used arguement
 *This program prints 0 or 1 for letters
 *Return: 0
 */

int _islower(int c)
{
if (islower(c) == 0)
{
return (0);
}
else
{
return (1);
}
}
