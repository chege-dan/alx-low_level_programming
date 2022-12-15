#include "main.h"

/**
* print_most_numbers - Prints out all numbers from 0 - 9 except 2 and 4
*/
void print_most_numbers(void)
{
char i;

i = '0';
do {
if ((i != '2') && (i != '4'))
{
_putchar(i);
}
i++;
} while (i <= '9');
_putchar('\n');
}
