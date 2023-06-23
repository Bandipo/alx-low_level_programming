#include "main.h"

/**
 * _isalpha - Checks for alphabet  case character
 * @c: The character to be checked
 * Return: 1 if c is alphabet case, else 0
 */

int _isalpha(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

