#include <stdio.h>
/**
 * main - prints 01 ro 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1, digit2;
	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 9 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
