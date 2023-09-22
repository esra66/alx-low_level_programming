#include"lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t.
 * @head: an input from list_t.
 * @str: pointer to char.
 * Return: number of nodes
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	return (NULL);

		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = *head;
		*head = newnode;
	return (newnode);
}



