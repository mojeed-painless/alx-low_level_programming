#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a listint_t list.
  * @head: head of double pointer.
  * @n: int.
  * Return: NULL if failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *p;

	if (head == NULL)
		return (NULL);
	w = malloc(sizeof(listint_t));
	if (w == NULL)
		return (NULL);
	w->n = n;
	w->next = NULL;
	if (*head == NULL)
	{
	*head = w;
		return (w);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = w;
	return (w);
