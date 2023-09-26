#include"lists.h"
/**
 * get_nodeint_at_index - entry point
 * @head: pointer
 * @index: Address to node
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr != NULL)
	{
		if (x == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		x++;
	}

	return (NULL);
}
