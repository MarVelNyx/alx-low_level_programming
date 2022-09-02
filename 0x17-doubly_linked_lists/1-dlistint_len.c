#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: head of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
