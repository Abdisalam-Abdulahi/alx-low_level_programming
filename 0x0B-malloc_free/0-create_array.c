#include <stdlib.h>
#include "main.h"

/**
  *create_array - creates arrays of pointers
  *@size: the size of the array
  *@c: is the char the make up the array
  *Return: returns apointer
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(arr));
	if (arr == NULL || size == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

