#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * a code that prints 0-9
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	int startNum;
	int endNum;

	startNum = 0;
	endNum = 10;

	while (startNum < endNum)
	{
		putchar(startNum + '0');
		startNum++;
	}
	putchar('\n');

	return (0);
}
