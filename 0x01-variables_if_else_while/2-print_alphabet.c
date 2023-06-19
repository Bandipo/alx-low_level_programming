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
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
