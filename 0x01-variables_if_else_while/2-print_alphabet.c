#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * a code that prints alphabets a-z in small letters .
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	char startCharacter;
	char endCharacter;

	startCharacter = 'a';
	endCharacter = 'z';

	while (startCharacter <= endCharacter)
	{
		putchar(startCharacter);
		startCharacter++;
	}
	putchar('\n');
	return (0);
}
