#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (s[i++] != '\0')
	{
		count = count + 1;
	}

	return (count);
}

