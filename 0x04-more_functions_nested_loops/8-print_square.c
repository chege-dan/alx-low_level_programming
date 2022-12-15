#include "main.h"

/**
* print_square - Prints a square of specified length
* @n: Square side length
*/
void print_square(int n)
{
int count1;
int count2;

for (count1 = 0; count1 < n; count1++)
{
for (count2 = 0; count2 < n; count2++)
{
_putchar('#');
}
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
