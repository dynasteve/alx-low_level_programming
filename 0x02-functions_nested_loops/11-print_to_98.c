#include "main.h"
#include <stdlib.h>

/**
 *print_to_98 - prints using _putchar to stdout
 *Description: Using the print_to_98 function
 *This program prints the numbers from n to 98
 *@n : First arguement
 *Return: 0
*/

void print_to_98(int n)
{
    int unit;
    int ten;

    while (n <= 98)
    {
        for (ten = 0; ten <= 9; ten++)
        {
            for (unit = 0; unit <= 9; unit++)
            {
                _putchar(ten + '0');
                _putchar(unit + '0');
                n++;
            }
        }
    }
}
