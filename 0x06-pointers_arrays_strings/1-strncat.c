#include "main.h"
#include <string.h>

/**
 * _strncat - Conactinates two strings
 * @dest: character value.
 * @src: character value
 * Return: returns pointer of @dest
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
