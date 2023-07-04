#include "lists.h"

/**
  *add_nodeint_end - function that adds a new node
  *at the end of a listint_t list
  *@head: holds the addres of the first node
  *@n: integer
  *Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr = malloc(sizeof(listint_t));

	temp = *head;
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;

	return (ptr);
}
