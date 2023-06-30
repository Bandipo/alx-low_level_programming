#include "main.h"

/**
 * _strncpy - copies at most an inputted number
 * @dest: destination string
 * @src: source string
 * @n: no of bytes to be copied from source
 * Return: pointer to the result string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;
	int src_len;

	index = 0;
	src_len = 0;

	while (src[index++])
	{
		src_len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = src_len; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
