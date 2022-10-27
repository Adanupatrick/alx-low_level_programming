#include "main.h"

/**
 * _strcmp - this compare two string
 * @s1: string number
 * @s2: string number two
 * Return: the difference between n1 & n2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
