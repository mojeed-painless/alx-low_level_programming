#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @n: bytes filled.
 * @s: memory area.
 * @b: constant byte.
 * Return: the pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		*(s + k) =  b;

	return (s);
}
