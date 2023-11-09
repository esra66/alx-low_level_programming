#include "lists.h"

/**
 *  * sum_dlistint - returns the sum of all the data
 *     * @head: head
 *      * Return: summ
 */
int sum_dlistint(dlistint_t *head)
{
	int summ;

	summ = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			summ += head->n;
			head = head->next;
		}
	}

	return (summ);
}
