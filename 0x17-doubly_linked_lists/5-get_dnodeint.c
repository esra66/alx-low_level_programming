#include "lists.h"

/**
 *  * get_dnodeint_at_index - get elem with index from dbl
 *   * @head: the head
 *    * @index: the index
 *     * Return: the node of index
 *      */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (index == x)
		{
			return (head);
		}
		head = head->next;
		x++;
	}
	return (NULL);
}
