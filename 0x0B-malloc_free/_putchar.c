#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the char c to stdout
 * @c: character to print
 *
 * Return: On success 1
 * 0n error: -1 is returned, abd errno is set appropriately
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
