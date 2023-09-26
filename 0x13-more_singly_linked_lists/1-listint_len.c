#include"lists.h"
/**
 * print_listint_len - entry point
 * @h: pointer
 * Return: count
 */

size_t print_listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
