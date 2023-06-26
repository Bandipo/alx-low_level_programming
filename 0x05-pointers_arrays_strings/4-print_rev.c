#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: void
 */

void print_rev(char *s)
{
	int strLength;

	strLength = 0;

	while (s[strLength] != '\0')
	{
		strLength++;
	}

	while (strLength >= 0)
	{
		_putchar(s[strLength]);
		strLength--;
	}
	_putchar('\n');
}
