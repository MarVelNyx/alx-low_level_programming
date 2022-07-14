#include "lists.h"
#include <string.h>

/**
 * add_node - function adds nodes to 
 * head of liked list
 * @head: pointer to list_t
 * @str: pointer to string
 * Return: pointer to new head list/ NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
