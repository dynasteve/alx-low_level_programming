#include "main.h"
#include <string.h>

void printlen(char len, int x);

/**
  * _strlen_recursion - Prints a string length
  * @s: the string
  *
  * Return: Nothing.
  */

int _strlen_recursion(char *s)
{
int x = strlen(s);
chae len[];

sprintf(len, x);

printlen(len, x);
}

/**
  * printlen - Prints a string length
  * @x: integer length of the string
  *
  * Return: Nothing.
  */

void printlen(char len, int x)
{
int *ptr = NULL;

ptr = len;

if (x > 0)
{
_putchar(*(ptr + x-x+1))
x--;
printlen(len, x);
}
else
{
x = 0;
}
}
