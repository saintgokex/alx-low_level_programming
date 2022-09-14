#include "main.h"
/**
 * _islower - checks for lowercase (ascii code 97 to 122)
 *@c: char type letter
 * Return: As 1 if lowercase, as 0 if not
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return(1);
	else
		return(0);


}
