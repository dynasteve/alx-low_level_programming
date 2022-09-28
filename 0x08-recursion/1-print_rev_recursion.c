#include "main.h"
#include <string.h>
/**
  * _print_rev_recursion - Prints a string in reverse
  * @s: the string
  * @a: s passes to a for reversing
  * @x: integer for iterations
  *
  * Reversing - This is the recursing function
  * @a: s passes to a for reversing
  * @x: integer for iterations
  * Description: reversing and Reversing Recurses itself to print the string in reverse order
  *
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
