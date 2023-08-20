#include "lists.h"
/**
  *delete_dnodeint_at_index - deletes the index node of the list
  *@head: points to the first elemnt
  *@index: the element with the index will be deleted
  *Return: 1 for success
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (-1);
	if (*head == tmp)
		*head = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}
