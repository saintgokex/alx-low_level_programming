#include "main"
/**
 * main - Entry point
 * Description: writes a to z
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z');
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
