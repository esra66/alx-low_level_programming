#include "lists.h"

/**
 * print_list - entry point
 * @h: pointer 
 * Return: counter
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		counter++;
	}

	return counter;
}
