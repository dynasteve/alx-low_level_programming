#include "main.h"
#include <string.h>

void printlen(int *x);

/**
  * _strlen_recursion - Prints a string length
  * @s: the string
  *
  * Return: Nothing.
  */

int _strlen_recursion(char *s)
{
int x = strlen(s);

printlen(x);
}

/**
  * printlen - Prints a string length
  * @x: integer length of the string
  *
  * Return: Nothing.
  */

void printlen(int x)
{
char len[];
int *ptr = NULL;
sprintf(len, x);

ptr = len;

if (x > 0)
{
_putchar(*(ptr + x--))
x--;
printlen(x);
}
else
{
x = 0;
}
}
