#include "main.h"

/**
 * _isdigit - check for digits  character
 * @c: The character to check
 * Return: 1 for digits, 0 for non digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
