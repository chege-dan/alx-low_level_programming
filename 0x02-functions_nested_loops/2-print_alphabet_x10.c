#include "main.h"
/**
 * print_alphabet_x10 - Printing the alphabet 10 times
 * Return: none
 */
void print_alphabet_x10(void)
{
	int count;
	char letter;

	do
    {
        for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
    } while (count < 10);
}