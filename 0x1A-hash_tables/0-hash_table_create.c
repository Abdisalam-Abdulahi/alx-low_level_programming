#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *hash_table_create - function that creates a hash table
  *@size: is the size of the array
  *Return: pointer to the newly created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_ptr = malloc(sizeof(hash_table_t));

	if (hash_ptr == NULL)
		return (NULL);
	hash_ptr->size = size;
	hash_ptr->array = calloc(hash_ptr->size, sizeof(hash_node_t *));
	if (hash_ptr->array == NULL)
	{
		free(hash_ptr);
		return (NULL);
	}
	return (hash_ptr);
}

