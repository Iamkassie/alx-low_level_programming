#include "main.h"
#inclide "stdio.h"

/**
* _memset - function that fills memory with constant byte
* @s: pointer to char
* @b: data tp change
* @n: index
* Return: *s 
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
