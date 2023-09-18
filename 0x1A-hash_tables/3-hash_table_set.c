#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  *hash_table_set - function that adds an element to the hash table
  *@ht:  is the hash table you want to add or update the key/value to
  *@key: the key to hash
  *@value: the value of the key
  *Return: 1 for sucess
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;

	unsigned int long idx;
	hash_node_t *new_ptr = malloc(sizeof(hash_node_t));

	if (new_ptr == NULL)
		return (0);

	if (key == NULL)
		return (0);

	if (ht == NULL)
		return (0);

	new_ptr->value = strdup(value);
	new_ptr->key = strdup(key);
	new_ptr->next = NULL;
	idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_ptr;
	}
	else
	{
		tmp = ht->array[idx];
		new_ptr->next = tmp;
		ht->array[idx] = new_ptr;
/*		tmp = new_ptr;*/

	}
	return (1);
}


