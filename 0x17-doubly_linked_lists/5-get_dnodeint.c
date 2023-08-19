#include "lists.h"
/**
  *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
  *@head: the first element of the list
  *@index: the index of the node to be searched
  *Return: return the node with index of index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}
