#include "llists.h"

/**
 *  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *   * @head: pointer to the head
 *    * @index: index
 *      * Return: pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	return current;
}
{
