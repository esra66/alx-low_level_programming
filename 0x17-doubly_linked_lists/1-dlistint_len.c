#include "lists.h"

/**
 *  * dlistint_len - Returns the number of elements
 *   * @h: Pointer to the head of the doubly linked list
 *    * Return: The number of elements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
