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
		printf("%d", startNum);
		startNum++;
	}
	printf("\n");

	return (0);
}
