#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

	return (0);
}
