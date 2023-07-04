#include "lists.h"

/**
  *sum_listint - function that returns the sum of all the data (n)
  *of a listint_t linked list
  *@head: holds the address of the first node
  *Return: the sum of all the data (n)
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
