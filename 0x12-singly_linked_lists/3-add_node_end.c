#include"lists.h"
/**
 * add_node_end - function that add node at the end.
 * @head: an input from type list_t.
 * @str: pointer to char.
 * Return: Number of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newnode;
	}
	return (newnode);
}
