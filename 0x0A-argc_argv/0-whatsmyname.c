#include <stdio.h>
/**
  *main - the main function it prints its name, followed by a new line
  *@argc: counts the arguments passed to the function
  *@argv: is a one-dimensional array of strings
  *Return: 0 for success
  */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
