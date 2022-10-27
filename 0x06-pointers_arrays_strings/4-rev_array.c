#include "main.h"

/**
 * reverse_array - this is reverse of string
 * @a: arrays of number
 * @n: numbers of array
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
