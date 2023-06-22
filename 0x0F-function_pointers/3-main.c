#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main -the main func
  *@argc: argument counter
  *@argv: the arguments it self
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int result, arg1, arg2;
	char ptr;
	int (*func)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	ptr = *argv[2];
	if ((ptr == '/' || ptr == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
