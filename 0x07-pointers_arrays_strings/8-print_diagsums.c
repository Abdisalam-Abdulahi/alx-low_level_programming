#include "main.h"

/**
  *print_diagsums- a function that prints the chessboard
  *@a: 2d array
  *@size: suze of the array
  */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum;
	int sum2;

	sum = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == 0)
			{
				if (i == 0)
				{
					sum += a[i * size + j];
					sum2 += a[i * size  + size - 1];
				}
				else
				{
					sum += a[i * size + j + i];
					sum2 += a[i * size  + (size - 1) - i];
				}
			}
		}
	}
	printf("%d, %d\n", sum, sum2);
}
