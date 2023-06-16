#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  *array_range - creates integer array from min to max
  *@min: starting point
  *@max: ending point
  *Return: pointer
  */
int *array_range(int min, int max)
{
	int *num, len, i;

	len = (max - min) + 1;
	num = malloc(len * sizeof(int));
	if (num == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}
