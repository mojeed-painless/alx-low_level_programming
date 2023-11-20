#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *r;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	r = *head;
	*head = r->next;
	n = r->n;
	free(r);
	return (n);
}
