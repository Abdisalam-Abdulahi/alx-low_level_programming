#include "function_pointers.h"

/**
  *f - callback function
  *@name: is the name to be printed
  */

void f(char *name)
{
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}

/**
  *print_name - prints name
  *@name: the name to be printed
  *@f: a function pointer
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

