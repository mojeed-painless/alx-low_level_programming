#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	const list_t *t;
	unsigned int c = 0;

	t = h;
	while (t)
	{
		c++;
		t = t->next;
	}
	return (c);
}
