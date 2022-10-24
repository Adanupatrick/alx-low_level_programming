#include "main.h"

/**
 * print_rev - printing files in reverse
 * @s: string is always printed
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
