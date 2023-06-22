#include "function_pointers.h"

/**
  *int_index - a function that searches for an integer
  *@array: the array to be searched in
  *@size: the size of the array
  *@cmp: compares values
  *Return: returns the index of the first element for which
  *the cmp function does not return 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
