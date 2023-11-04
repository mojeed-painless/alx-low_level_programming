#include "main.h"
/**
 * _memcpy - copies memory area.
 * @n: bytes filled.
 * @src: source memory area.
 * @dest: destination memory area.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		*(dest + k) =  *(src + k);

	return (dest);
}
