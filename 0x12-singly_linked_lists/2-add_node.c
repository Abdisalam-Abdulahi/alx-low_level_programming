#include "lists.h"
#include <string.h>

/**
  *add_node - adds a new node at the beginning of a list_t list
  *@head: a pointer to another pointer
  *@str: is string
  *Return: the address of the new element
  */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
