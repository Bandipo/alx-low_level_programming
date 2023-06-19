#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * a code that prints alphabets a-z in reverse .
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	char startCharacter;
	char endCharacter;

	startCharacter = 'a';
	endCharacter = 'z';

	while (endCharacter >= startCharacter)
	{
		putchar(endCharacter);
		endCharacter--;
	}
	putchar('\n');
	return (0);
}
