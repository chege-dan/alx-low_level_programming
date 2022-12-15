#include "main.h"

/**
* print_triangle - Prints a triangle of specified length
* @n: triangle side length
*/
void print_triangle(int n)
{
int count1;
int count2;

for (count1 = 0; count1 < n; count1++)
{
for (count2 = 1; count2 < (n - count1); count2++)
{
_putchar(' ');
}
for (count2 = 0; count2 <= count1; count2++)
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
