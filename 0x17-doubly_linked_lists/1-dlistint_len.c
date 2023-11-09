#include "lists.h"

/**
 *  * dlistint_len - Finds the number of nodes in a doubly linked list.
 *   * @h: The linked list.
 *    * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *pres = h;

	while (pres != NULL)
	{
		pres = pres->next;
		nodes++;
	}

	return (nodes);
}
