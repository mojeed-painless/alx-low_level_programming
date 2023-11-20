#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int m = 0;

	while (head != NULL)
	{
		m += head->n;
		head = head->next;
	}
	return (m);
}
