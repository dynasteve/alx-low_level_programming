#include "main.h"

/**
 * leet - changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: address to the string
 */

char *leet(char *str)
{
int i;
int g;

char arr1[] = "AaEeOoTtLl";
char arr2[] = "4433007711";

for (i = 0; str + i; i++)
{
for (g = 0; g <= 9; g++)
{
if (arr1[g] == *str + i)
{
*(str + i) = arr2[g];
}
}
}

return (str);
}
