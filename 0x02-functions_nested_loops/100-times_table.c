#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0, the function does not print anything.
 *
 * @n: The maximum value for the times table.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			printf("%4d\t", i * j);
		}
		printf("\n");
	}
}

