#include "main.h"
/**
 * _isalpha - checks if c is an alphabet
 * @c: char type
 * Return: 1 if it's an alphabet, 0 if not
 */
int _isalpha(int c)
{
	char c;
	{
	if (c < 91 && c > 4)
		return (1);
	else if (c < 123 && c > 96)
		return (1);
	else
		return (0);
	}
	_putchar('\n');

}
