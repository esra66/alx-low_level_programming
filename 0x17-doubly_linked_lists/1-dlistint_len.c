#include"lists.h"

/**
 *  * dlistint_len - Returns the number of elements
 *   * @h: Pointer to the head of the doubly linked list
 *    * Return: The number of elements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}

	return (x);
}
