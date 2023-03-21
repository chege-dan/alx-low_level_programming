#include "main.h"

/**
 * _strncpy -  function that copies a string
 * @dest: input value
 * @src: input value
 * @n: assigned value
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (src[a++])
		b++;
	for (a = 0; src[a] && a < n; a++)
		dest[a] = src[a];
	for (a = b; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
