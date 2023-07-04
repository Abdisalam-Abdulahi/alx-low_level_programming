#include "lists.h"


/**
  *print_listint - prints elemnts in list_int
  *@h: hold the address of the first node
  *Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *ptr = NULL;

	ptr = h;
	i = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
