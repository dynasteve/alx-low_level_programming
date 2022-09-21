#include "main.h"
#include <string.h>

/**
 * reverse_array - Reverses an array
 * @a: Array
 * @n: value
 * Return: returns pointer of @dest
 */

void reverse_array(int *a, int n)
{
int temp;
for(int i = 0; i<n/2; i++){
temp = a[i];
a[i] = a[n-i-1];
a[n-i-1] = temp;
}

return (a);
}
