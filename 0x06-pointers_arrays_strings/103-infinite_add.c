#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number string
 * @n2: Second number string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result string, or 0 if the result cannot be stored
 *         in the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	int i = 0, j = 0, k = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 > size_r || len2 > size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;
	r[k] = '\0';

	while (i >= 0 || j >= 0)
	{
		sum = carry + (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
		carry = sum / 10;
		r[--k] = sum % 10 + '0';
		i--;
		j--;
	}

	if (carry)
	{
		if (k == 0)
			return (0);
		r[--k] = carry + '0';
	}

	return (&r[k]);
}

