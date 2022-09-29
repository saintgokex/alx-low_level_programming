#include "main.h"
/**
 * factorial - gets the factorial of a given numner
 * @n: integer
 * Return: -1 if n is less than 0, factorial is otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
