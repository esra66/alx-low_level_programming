#include "lists.h"

/**
 *  * delete_dnodeint_at_index - deletes the node at index
 *     * @head: head
 *      * @index: index
 *       * Return: 1 or -1
 *        */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *he1;
	dlistint_t *he2;
	unsigned int x;

	he1 = *head;

	if (he1 != NULL)
		while (he1->prev != NULL)
			he1 = he1->prev;

	x = 0;

	while (he1 != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = he1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				he2->next = he1->next;

				if (he1->next != NULL)
					he1->next->prev = h2;
			}

			free(he1);
			return (1);
		}
		he2 = he1;
		he1 = he1->next;
		x++;
	}

	return (-1);
}
