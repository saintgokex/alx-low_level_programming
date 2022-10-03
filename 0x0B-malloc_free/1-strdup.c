#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: pointer to a string being duplicated
 * Return: NULL if string is NULL,
 * pointer to string being duplicated on success.
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/*check if str is null*/
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	/*checks if malloc was a success*/
	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
