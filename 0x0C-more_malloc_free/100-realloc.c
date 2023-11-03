#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to reallocate
 * @old_size: old number of bytes
 * @new_size: new number of Bytes
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *y = NULL;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		y = malloc(new_size);
		if (!y)
			return (NULL);
		return (y);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		y = malloc(new_size);
		if (!y)
			return (NULL);
		for (a = 0; a < old_size; a++)
			y[a] = *((char *)ptr + a);
		free(ptr);
	}
	else
	{
		y = malloc(new_size);
		if (!y)
			return (NULL);
		for (a = 0; a < new_size; a++)
			y[a] = *((char *)ptr + a);
		free(ptr);
	}
	return (y);
}
