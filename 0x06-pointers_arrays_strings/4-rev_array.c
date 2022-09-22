#include "main.h"
/**
 * reverse_array - reserses the content of an array
 * @a: pointer to int param
 * @n: pointer to int param
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
