#include "hash_tables.h"
#include <stddef.h>

/**
  *hash_table_get - function that retrieves a value associated with a key
  *@ht: is the hash table you want to look into
  *@key: is the key you are looking for
  *Return: element, or NULL if key couldn’t be found
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int long idx;
	hash_node_t *item;

	idx = key_index((unsigned char *)key, ht->size);
	item = ht->array[idx];

	if (item != NULL)
		return (item->value);

	return (NULL);
}
