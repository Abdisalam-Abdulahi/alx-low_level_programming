#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  *sum_them_all - function that returns the sum of all its parameters
  *@n: number of parameters
  *Return: the result of the sumation
  *
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(ap, n);
	i = sum = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
