#include <unistd.h>

/**
 * _putchar - Custom function to output a character
 * @c: The character to print
 * Return: On Success 1
 * On error, -1 is returned, and error is set appropriately
 *     It is part of the unistd.h header file,
 */
int  _putchar(char c)
{
	return (write(1, &c, 1));
}
