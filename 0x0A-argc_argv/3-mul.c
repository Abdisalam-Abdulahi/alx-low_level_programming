#include <stdio.h>
#include <stdlib.h>

/**
  *main - multiplies two numbers passed as argument
  *@argc: counts the arguments passed to the function
  *@argv: is a one-dimensional array of strings
  *Return: 0 for success
  */

int main(int argc, char *argv[])
{
	int r;

	if (argc == 3)
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
