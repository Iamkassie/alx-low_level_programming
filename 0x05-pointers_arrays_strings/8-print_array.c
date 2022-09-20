#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n of elements of int arrays
 * @a: input array
 * @n: input n element
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
