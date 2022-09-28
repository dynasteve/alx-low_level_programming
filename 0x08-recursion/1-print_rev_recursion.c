#include "main.h"
#include <string.h>

void reversing(char *a, int x);

/**
  * _print_rev_recursion - Prints a string in reverse
  * @s: the string
  *
  * Return: Nothing.
  */
void _print_rev_recursion(char *s)
{
int x = strlen(s);
reversing(s, x - 1);
}
/**
  * reversing - This is the recursing function
  * @a: passed to a for reversing
  * @x: integer for iterations
  * Description: reversing Recurses itself to print the string in reverse
  * Return: Nothing
  */

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
