#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: is pointer
 * @src: is pointer
 * Return: coppied value
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
