#include "main.h"

/**
 * _atoi - convert string to intger
 * @s: pointer to string
 * Return: void
 */

int _atoi(char *s)
{
	int sign;
	unsigned int a;
	char *b;

	b = s;
	a = 0;
	sign = 1;
	while (*b != '\0' && (*b < '0' || *b > '9'))
	{
		if (*b == '-')
			sign *= -1;
		b++;
	}
	if (*b != '\0')
	{
		do {
			a = a * 10 + (*b - '0');
			b++;
		} while (*b >= '0' && *b <= '9');
	}
	return (a * sign);
}
