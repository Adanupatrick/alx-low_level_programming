#include "main.h"

/**
 * _puts - printing a string
 * @str: string is to be printed here
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
