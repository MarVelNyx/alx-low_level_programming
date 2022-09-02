#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index index of a dlistint_t linked list
 * @head: pointer to head
 * @index: index to new node
 * Return: 1 = succes/ -1 = failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (!head || !(*head))
	{
		return (-1);
	}
	else
	{
		temp = *head;
		while (index != i++ && temp)
			temp = temp->next;
		if (!temp)
			return (-1);
		if (temp->next)
			temp->next->prev = temp->prev;
		if (index == 0)
			*head = temp->next;
		else
			temp->prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
