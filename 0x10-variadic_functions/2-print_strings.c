#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_strings - function that prints string
  *@separator: separates between strings
  *@n: the number arguments
  *
  */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *res;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		res = va_arg(ap, char *);
		if (res == NULL)
			printf("(nil)");
		else
			printf("%s", res);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

