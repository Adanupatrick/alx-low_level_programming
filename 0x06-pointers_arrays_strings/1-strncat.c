#include "main.h"

/**
 * _strncat - this join two string and byte
 * @dest: this copy to
 * @src: this copy from
 * @n: this is the number of char to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] '\0';
	return (dest);
}
