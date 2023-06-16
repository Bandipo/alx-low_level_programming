#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function prints the size of various data types.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	printf("Size of a char: %zu\n", sizeof(char));
	printf("Size of an int: %zu\n", sizeof(int));
	printf("Size of a long int: %zu\n", sizeof(long int));
	printf("Size of a long long int: %zu\n", sizeof(long long int));
	printf("Size of a float: %zu\n", sizeof(float));

	return (0);
}
