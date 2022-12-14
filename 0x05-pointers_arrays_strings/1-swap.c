#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer of type int
 * @b: second integer of type int
 * Return: values of swapped integers
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
