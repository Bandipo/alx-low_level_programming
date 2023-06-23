#include "main.h"

/**
 * _isupper - check for upper case character
 * @c: The character to check
 * Return: 1 for upper case, 0 for non upper case
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
