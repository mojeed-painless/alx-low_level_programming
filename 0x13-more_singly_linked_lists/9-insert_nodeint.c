#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *p, *w;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		p = *head;
		for (i = 0; i < idx - 1 && p != NULL; i++)
		{
			p = p->next;
		}
		if (p == NULL)
			return (NULL);
	}
	w = malloc(sizeof(listint_t));
	if (w == NULL)
		return (NULL);
	w->n = n;
	if (idx == 0)
	{
		w->next = *head;
		*head = w;
		return (w);
	}
	w->next = p->next;
	p->next = w;
	return (w);
}
