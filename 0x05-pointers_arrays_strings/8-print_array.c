#include "main.h"
#include <stdio.h>

/**
 * print_array - this print n elements of an array
 * @a: array printed
 * @n: numbers of values to be printed
 * Return: printed array
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf('\n');
}
