#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: no of bytes to be used from source
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}

	while (*src && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';
	return (ptr);
}
