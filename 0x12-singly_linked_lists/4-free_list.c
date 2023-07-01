#include "lists.h"

/**
  *free_list - frees head
  *@head: points tothe memery to be freed
  */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
