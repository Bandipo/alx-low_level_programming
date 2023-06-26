#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: first number
 * @b: second number
 * Return: returns void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
