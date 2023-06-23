#include "main.h"

/**
 * _islower - Checks for lower case character
 * @c: The character to be checked
 * Return: 1 if c is lower case, else 0
 */

int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

