#include "lists.h"

/**
  *add_dnodeint - adds a new node at the beginning of a dlistint_t list
  *@head: pointing to the firs element
  *@n: the value of the new node
  *Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}

	new->next = *head;
	*head = new;

	return (new);
}
