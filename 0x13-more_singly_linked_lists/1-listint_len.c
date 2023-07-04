#include "lists.h"

/**
  *listint_len - returns the len of listint_t
  *@h: holds the address of the first element
  *Return: the length of listint_t
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t i = 0;

	ptr = h;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
