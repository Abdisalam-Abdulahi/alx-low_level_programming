#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
