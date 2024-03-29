#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list
 * @head: pointer to head
 * @n: data to add to node
 * Return: pointer to new node/ NULL = failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (!head || !(*head))
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		new_node->prev = temp;
		temp->next = new_node;

		return (new_node);
	}
	return (NULL);
}
