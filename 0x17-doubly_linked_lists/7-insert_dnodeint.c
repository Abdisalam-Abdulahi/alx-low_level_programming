#include "lists.h"
/**
  *insert_dnodeint_at_index - insert new node at idx
  *@h: points to the first node
  *@idx: the index in which the new node to be inserted
  *@n: the value of the new node
  *Return: the address of the node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	while (tmp && i < idx)
	{
		tmp = tmp->next;
		i++;
	}
	new->n = n;
	new->prev = tmp->prev;
	tmp->prev = new;
	new->next = tmp;
	if (new->prev != NULL)
		new->prev->next = new;
	else
		*h = new;
	return (new);
}
