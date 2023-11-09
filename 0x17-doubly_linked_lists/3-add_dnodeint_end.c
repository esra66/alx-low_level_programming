#include "lists.h"

/**
 *  * add_node_at_end - adds a new node at the end
 *     * @h: head
 *      * @value: value of the element
 *       * Return: the address of the new element
 */
dlistint_t *add_node_at_end(dlistint_t **h, const int value)
{
	dlistint_t *current;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->next = NULL;

	current = *h;

	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	else
	{
		*h = new_node;
	}

	new_node->prev = current;

	return (new_node);
}

