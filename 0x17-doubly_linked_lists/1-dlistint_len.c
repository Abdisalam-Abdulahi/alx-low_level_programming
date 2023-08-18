#include "lists.h"
/**
  *dlistint_len -  returns the number of elements in a linked dlistint_t list
  *@h: the firs node of the list
  *Return: the number of elements in a list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
