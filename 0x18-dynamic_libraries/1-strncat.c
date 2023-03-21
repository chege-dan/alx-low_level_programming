#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: a value to be append
 * @dest: a value to append
 * @n: input value
 * Return:  pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
