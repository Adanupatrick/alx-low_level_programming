#include <unistd.h>

/**
 * main - Printing new comment
 *
 * Return: Always 1 (Success is guaranty)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
