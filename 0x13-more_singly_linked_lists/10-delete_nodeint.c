#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	p = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (p->next == NULL)
			return (-1);
		p = p->next;
	}
	next = p->next;
	p->next = next->next;
	free(next);
	return (1);

}
