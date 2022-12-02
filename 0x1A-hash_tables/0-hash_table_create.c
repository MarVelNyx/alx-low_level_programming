#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function creates hash table
 * @size: size of has table
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	
	hash_table_t *new_table = (hash_table_t*) malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = (hash_node_s**) calloc(new_table->size, sizeof(hash_node_t*));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (; i < new_table->size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
