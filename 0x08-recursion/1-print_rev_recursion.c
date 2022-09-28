#include "main.h"
#include <string.h>
/**
  * _print_rev_recursion - Prints a string in reverse
  *
  * @s: the string
  *
  * Return: Nothing.
  */
void reversing(char *a, int x);
void _print_rev_recursion(char *s)
{
int x = strlen(s);
reversing(s, x);
}

void reversing(char *a, int x)
{
int i = x - 1;
char *ptr = NULL;
ptr = a;
if (i >= 0)
{
_putchar(*(ptr + i));
i--;
reversing(a, i);
}
else
{
_putchar(*(ptr + i));
}
}
