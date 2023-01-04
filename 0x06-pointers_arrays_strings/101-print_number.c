#include "main.h"
/**
* print_number - Print number as characters
* @n: integer value
* Return: void
*/
void print_number(int n)
{
unsigned int numb;

numb = n;
if (n < 0)
{
_putchar('-');
numb = -n;
}
if (numb / 10 != 0)
print_number(numb / 10);

_putchar((numb % 10) + '0');
}
