#include "main.h"

/**
 * print_most_numbers - print numbers
 * Return : void
 */

void print_most_numbers(void)
{
	int startNum;

	startNum = 0;

	while (startNum < 10)
	{
		if (startNum == 2 || startNum == 4)
		{
			startNum++;
			continue;
		}
		_putchar(startNum + '0');
		startNum++;
	}
	_putchar('\n');
}
