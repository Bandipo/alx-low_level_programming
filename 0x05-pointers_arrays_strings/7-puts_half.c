#include <main.h>
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: Input string
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start;

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;

	for (; start < length; start++)
		_putchar(str[start]);

	_putchar('\n');
}

