#include "main.h"
/**
 * puts2 - print every character of a string
 * @str- string
 */
void puts22(char *str)
{
	int a = 0, len = 0;

	while (str[a++])
		len++;

	for (a = 0; a < len; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
