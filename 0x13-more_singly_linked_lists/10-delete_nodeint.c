#include"lists.h"

/**
 * delete_nodeint_at_index - entry point
 * @head: pointer
 * @index: Address of node
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;
	listint_t *tmp;

	if (*head == NULL)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (ptr != NULL)
	{
		if (i == index - 1)
			tmp = ptr;

		if (i == index)
		{
			tmp->next = ptr->next;
			free(ptr);
			ptr = tmp->next;
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
