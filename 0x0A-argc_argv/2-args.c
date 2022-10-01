#include <stdio.h>

/**
 * main - prints all arguments, one per line
 * @argc: arguments count
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
