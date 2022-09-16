#include "main.h"
/**
 * _isupper(int c) - prints uppercase
 * @c int type character
 * Return: 1 if uppercase, 0 is otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
