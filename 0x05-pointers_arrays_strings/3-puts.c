#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer to the string to print
 * Return: void
 */
void _puts(chat *str)
{
	int i = 0;

	while (str[i])
	{
		_puts(str[i]);
		i++
	}
	_puts('\n');
}
