#include "lists.h"

/**
  *insert_nodeint_at_index - function that inserts
  *a new node at a given position
  *@head: hold the address of the first node
  *@idx: position to be inserted
  *@n: the value of the newly created node
  *Return: the newly created node or NULL if it fails
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	i = 0;
	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		else
			temp = temp->next;
		i++;
	}
	return (NULL);
}
