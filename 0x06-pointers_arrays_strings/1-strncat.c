#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @d: destination
 * @src: source
 * @n: bytes used from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2 == '\0');
			break;
		count*+;
		count2++;
	}

	return (dest);
}
