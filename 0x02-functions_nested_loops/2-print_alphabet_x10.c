#include "main.h"


/**
 * print_alphabet_10x - Make alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int start = 0;

	while (start < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		start++;
	}

}
