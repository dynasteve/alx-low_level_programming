#include <stdio.h>
/**
 *main - print sizes of variables using sizeof
 *Description: Using the main function
 *This program prints sizes of data types
 *Return: 0
 */
#include <string.h>
int main(void)
{
char a;
int b;
long c;
long long d;
float e;
printf("Size of a char: %c byte(s)\n", sizeof(a));
printf("Size of an int: %d byte(s)\n", sizeof(b));
printf("Size of a char: %li byte(s)\n", sizeof(c));
printf("Size of a long long int: %lld byte(s)\n", sizeof(d));
printf("Size of a float: %f byte(s)\n", sizeof(e));
return (0);
}
