#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */

void print_times_table(int n)
{
if (n > 0 && n <= 15)
{
int i = 0;

while (i <= n)
{
int j = 0;

while (j <= n)
{
if (j > 0)
{
print_space(i * j);
}
if (j < n)
{
printf("%d,", i * j);
} else
{
printf("%d", i * j);
}
j++;
}
printf("\n");
i++;
}
}
if (n == 0)
{
printf("%d", 0);
printf("\n");
}
}
