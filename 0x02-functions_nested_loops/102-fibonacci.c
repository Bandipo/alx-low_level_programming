#include <stdio.h>

/**
 * main - Prints the first 52 fibonnacci numbers
 * Return: Nothing
 */

int main(void)
{
	int i, j, k;

	i = 0;
	j = 1;
	k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", j);
	else if (i == 1)
	printf(", %ld", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %ld", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}
