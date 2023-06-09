#include "lists.h"

/**
  *get_nodeint_at_index - function that returns the nth node
  *of a listint_t linked list
  *@head: holds the address of the first element
  *@index: the index of the node to be returned
  *Return: the nth node of a listint_t linked list
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	ptr = head;
	i = 0;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
