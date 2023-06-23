#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_numbers - function that prints numbers
  *@separator: separates between numbers
  *@n: the number of arguments
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int res;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		res = va_arg(ap, int);
		printf("%d", res);
		if (i < (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
