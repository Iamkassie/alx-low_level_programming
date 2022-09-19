#include "main.h"

/**
 * swap_int - a function that swaps 2 int values
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
