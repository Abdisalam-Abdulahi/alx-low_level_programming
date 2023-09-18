#include "hash_tables.h"
#include <stdio.h>

/**
  *hash_table_print - function that prints a hash table
  *@ht: the table to be printed
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int j = 0;
	unsigned long int k = 0;
	unsigned long int len = 0;

	if (ht == NULL)
		return;
	while (j < ht->size)
	{
		if (ht->array[j])
			len++;
		j++;
	}
/*	printf("len is %d\n", len);*/
	while (i < ht->size)
	{
		if (i == 0)
			printf("{");
		if (ht->array[i])
		{
			if (ht->array[i]->next)
			{
				while (ht->array[i]->next)
				{
					printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
					ht->array[i] = ht->array[i]->next;
				}
			}

			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (k < len - 1)
				printf(", ");
			k++;
		}
		if (i == ht->size - 1)
			printf("}\n");
		i++;
	}
}
