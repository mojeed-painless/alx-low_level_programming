#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: type of elements
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *y = NULL;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	y = malloc(nmemb * size);
	if (y == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
	{
		*((char *)(y) + a) = 0;
	}
	return (y);
}
