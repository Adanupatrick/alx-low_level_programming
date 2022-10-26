#include <unistd.h>

/**
 * _putchar - this will write the character c to stdout
 * @c: char has to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
