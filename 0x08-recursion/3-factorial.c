#include "main.h"
/**
 * factorial - gets the factorial of a given numner
 * @n: integer 
 * Return: returns -1 if @n is lower than 0 or the facrorial of the number if otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return(-1);
	else if (n <= 1)
		return(1);
	else
		return(n * factorial(n -1));
}
