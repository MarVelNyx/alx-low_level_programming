#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list
 * @head: pointer to head
 * @n: data to add to node
 * Return: pointer to new element/ NULL = failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		temp->prev = new_node;
		*head = new_node;
		new_node->next = temp;
		return (new_node);
	}
	return (NULL);
}
