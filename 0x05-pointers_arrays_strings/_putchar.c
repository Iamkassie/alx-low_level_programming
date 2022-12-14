#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: Character to print
 *
 * Return: Always 1 (Success)
 * On error, return 1, and errno is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
