#include "main.h"

/**
 * more_numbers - print numbers
 * Return : void
 */

void more_numbers(void)
{
	int startNum;
	int i;

	startNum = 0;

	while (startNum < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		startNum++;
	}
}
