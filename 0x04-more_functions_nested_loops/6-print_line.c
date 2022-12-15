#include "main.h"

/**
* print_line - Prints a straight line of a given length
* @n: Length of the line
*/
void print_line(int n)
{
int count;

if (n > 0)
{
for (count = 0; count < n; count++)
{
_putchar('_');
}
}
_putchar('\n');
}
