#include <stdio.h>
/**
 * bmain - function executed before main
 * Return: no return
 */
void first(void)__attribute__((constructor));

/**
 * first - prints a string before the main function is executed
 */

void first(void)
{
	printf("You're the beat! and yet, you must allow,%s"
	"\nI bore my house upon my back!\n");
}
