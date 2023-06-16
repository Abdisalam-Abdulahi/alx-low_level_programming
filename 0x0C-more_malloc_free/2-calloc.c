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
	char *ptr;
	int i, len;

	len = sizeof(nmemb);
	i = 0;
	while (i < len)
	{
		ptr = malloc(size);
		i++;
	}
	return (ptr);
}
