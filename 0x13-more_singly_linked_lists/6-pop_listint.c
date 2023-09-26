#include"lists.h"

/**
 * pop_listint - entry point
 * @head: pointer
 * Return: x
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	ptr = *head;
	x = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (x);
}
