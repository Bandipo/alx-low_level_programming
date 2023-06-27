#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * rev_string - prints a string in reverse
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{
	int forwardPointer;
	int backwardPointer;

	forwardPointer = 0;
	backwardPointer = strlen(s) - 1;

	while (forwardPointer < backwardPointer)
	{
		char tmp;

		tmp = s[forwardPointer];
		s[forwardPointer] = s[backwardPointer];
		s[backwardPointer] = tmp;
		forwardPointer++;
		backwardPointer--;
	}
}
