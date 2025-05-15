#include "main.h"

void swap_int(int *a, int *b)
{
	int tmp;
	tmp  = *b;
	*b = *a;
	*a = tmp;
}
