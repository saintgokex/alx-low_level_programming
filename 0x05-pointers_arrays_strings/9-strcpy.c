#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: a buffer to copy the string to .
 * @src: a cource string to copy.
 *
 * Return: a pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
