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
	dlistint_t *tmp2;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int size = len(*h);

	if (idx > size)
		return (NULL);
	if (idx == 0)
		add_dnodeint(h, n);
	else if (idx == size)
		add_dnodeint_end(h, n);
	else
	{
		new->n = n;
		new->next = NULL;
		while (--idx)
		{
			tmp = tmp->next;
		}
		tmp2 = tmp->next;
		new->next = tmp->next;
		new->prev = tmp;
		tmp->next = new;
		tmp2->prev = new;
	}

	return (new);
}


/**
  *len - return the length of the list
  *@head: points to the first node;
  *Return: the length of the list
  */
int len(dlistint_t *head)
{
	dlistint_t *tmp = head;
	unsigned int n = 0;

	while (tmp)
	{
		tmp = tmp->next;
		n++;
	}
	return (n);
}
