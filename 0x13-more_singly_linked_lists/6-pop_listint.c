#include "lists.h"

/**
  *pop_listint - deletes the first node of the list
  *@head: the node to be deleted
  *Return: the head node’s data (n)
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (n);
}
