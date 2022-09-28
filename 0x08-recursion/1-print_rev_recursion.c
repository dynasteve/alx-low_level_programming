#include "main.h"
#include <stdio.h>
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
int i;
char *ptr = NULL;
ptr = a;
for(i = x - 1; i < 0; i--)
{
printf("%d", *(ptr + i));
}
}
