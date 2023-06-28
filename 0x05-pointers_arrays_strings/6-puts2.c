#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * puts2 - prints every other character
 * @str: the string
 * Return: void
 */

void puts2(char *str)
{
	int forwardPointer;
	int backwardPointer;

	forwardPointer = 0;
	backwardPointer = strlen(str) - 1;

	while (forwardPointer <= backwardPointer)
	{
		_putchar(str[forwardPointer]);
		forwardPointer += 2;
	}
	_putchar('\n');
}
