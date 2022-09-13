#include "main.h"
#include <ctype.h>
/**
 *_isalpha - prints using _putchar to stdout
 *Description: Using the _isalpha function for c
 *@c: Is the used arguement
 *This program prints 0 or 1 for letters
 *Return: 0
 */

int _isalpha(int c)
{
if (isalpha(c) == 0)
{
return (0);
}
else
{
return (1);
}
}
