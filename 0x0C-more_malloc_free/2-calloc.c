#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *_calloc -  function that allocates memory for an array, using malloc
  *@nmemb: is an array in which we will allocate memory for its elements
  *@size: the size of memory to allocate for each elemnt
  *Return: a pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char **ptr;
	int i, len;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = sizeof(nmemb);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = malloc(size);
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
