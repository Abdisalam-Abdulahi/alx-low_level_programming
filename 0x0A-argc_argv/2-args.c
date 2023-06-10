#include <stdio.h>


/**
  *main - the main function it prints the arguments passed to it
  *@argc: counts the arguments passed to the function
  *@argv: is a one-dimensional array of strings
  *Return: 0 for success
  */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
