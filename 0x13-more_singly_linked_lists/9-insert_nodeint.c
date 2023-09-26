#include"lists.h"
/**
 * insert_nodeint_at_index - entry point
 * @head: pointer
 * @idx: Address of node
 * @n: integer
 * Return: new
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr;
	listint_t *new;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	ptr = *head;


	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
		if (i == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
	}
	return (NULL);
}
