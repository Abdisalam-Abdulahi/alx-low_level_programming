#include <stdio.h>
#include "lists.h"


/**
  *print_list -  function that prints all the elements of a list_t list
  *@h: points to the first node
  *Return: the number of nodes
  *
  */

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *ptr = NULL;

	ptr = h;
	i = 0;
	while (ptr != NULL)
	{
		i++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (i);
}

