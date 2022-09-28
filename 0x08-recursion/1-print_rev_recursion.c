#include "main.h"
#include <string.h>
/**
  * _print_rev_recursion - Prints a string in reverse
  * Reversing - This is the recursing function
  * @s: the string
  * @a: s passes to a for reversing
  * @x: integer for iterations
  * Return: Nothing.
  */
void reversing(char *a, int x);
void _print_rev_recursion(char *s)
{
int x = strlen(s);
reversing(s, x - 1);
}

void reversing(char *a, int x)
{
int i = x;
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
i = 0;
}
}
