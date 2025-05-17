#include "main.h"
/**
  *reverse_array- reverses array
  *@a: char pointer
  *@n: number of elements in the array
  */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
		i++;
	}
}
