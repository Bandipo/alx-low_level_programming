#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: destination pointer
 * @b: constant byte
 * @n: count of byte
 * Return: returns the memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
