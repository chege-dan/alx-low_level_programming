#include "main.h"

/**
*more_numbers - prints 0-14 ten times
*Return: always 0
*/
void more_numbers(void)
{
int i = 0;

while (i++ <= 9)
{
int num = 0;

while (num <= 14)
{
if (num >= 10)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
num++;
}
_putchar('\n');
}
}
