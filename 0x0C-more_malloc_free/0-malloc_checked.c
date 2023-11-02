#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @n: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int n)
{
	void *m = malloc(n);

	if (m == NULL)
		exit(98);

	return (m);
}
