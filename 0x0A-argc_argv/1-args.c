#include <stdio.h>

/**
  *main - the main function it prints the number of arguments passed to it
  *@argc: counts the arguments passed to the function
  *@argv: is a one-dimensional array of strings
  *Return: 0 for success
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
