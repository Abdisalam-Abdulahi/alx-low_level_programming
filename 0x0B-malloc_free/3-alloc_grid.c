#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *alloc_grid - returns a pointer to a 2 dimensional array of integers
  *@width: colums of the array
  *@height: rows of the array
  *Return: pointer
  */

int **alloc_grid(int width, int height)
{
	int **mArr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	mArr = malloc(height * sizeof(int *));
	if (mArr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mArr[i] = malloc(sizeof(int) * width);
		if (mArr[i] == NULL)
		{
			free(mArr);
			for (j = 0; j <= i; j++)
				free(mArr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mArr[i][j] = 0;
	}
	return (mArr);
}
