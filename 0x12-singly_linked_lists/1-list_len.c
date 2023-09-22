#include"lists.h"


/**
* list_len - function that prints all the elements.
* @h: an input from type list_t.
* Return: the number of nodes in size_t.
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL && h->str != NULL)

	{
		h = h->next;
		count++;

	}
	return (count);
}
