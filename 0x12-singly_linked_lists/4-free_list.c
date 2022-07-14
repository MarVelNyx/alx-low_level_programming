#include "lists.h"

/**
 * fre_list - function frees linked list
 * @head: pointer to head element of list
 * Return: Notthing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
