#include "main.h"

/**
 * print_numbers - print numbers
 * Return : void
 */

void print_numbers(void)
{
	int startNum;

	startNum = 0;

	while (startNum < 10)
	{
		_putchar(startNum + '0');
		startNum++;
	}
	_putchar('\n');
}
