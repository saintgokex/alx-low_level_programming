#include <stdio.h>
/**
 * main - print buzz, fizz, for multiples of 5 and 3
 * @n - int type number
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (n);
}
