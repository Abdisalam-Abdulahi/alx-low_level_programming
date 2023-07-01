#include "lists.h"

/**
  *list_len - returns the numner of elements in a single linked list
  *@h: hold the address of the first node
  *Return: the number of element in a single linked list
  *
  */

size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
