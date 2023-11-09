#include "lists.h"

/**
 *  * print_dlistint - Function that prints all the elements
 *   * @h: Pointer to the head of the doubly linked list
 *    * Return: The number of elements in the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}

