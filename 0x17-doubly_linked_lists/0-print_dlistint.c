#include "lists.h"
/**
  *print_dlistint - prints all the elements of a dlistint_t lis
  *@h: the starting point of dlist
  *Return: number of nodes in a dlist
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
