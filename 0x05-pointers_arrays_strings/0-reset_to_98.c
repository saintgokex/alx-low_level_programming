#include "main.h"
/**
 * reset_to_98 - resets the value of n
 * @n: int type integer
 * Return: returns the asigned value of @n
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	_putchar(n);

	*p = 98;
	_putchar(&n);

}
