#include "lists.h"

/**
  *sum_dlistint - returns the sum of all the data of a dlistint_t linked list
  *@head: the first element of the list
  *Return: the sum of all the data (n) of a dlistint_t linked list
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
