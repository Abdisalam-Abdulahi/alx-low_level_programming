#include "lists.h"

/**
  *add_nodeint - adds new node at the begining of the list
  *@head: hold the address of the first element
  *@n: integer
  *Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
