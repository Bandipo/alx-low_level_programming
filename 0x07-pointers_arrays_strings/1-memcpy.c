#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
