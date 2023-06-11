#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - addes two numbers passed as argument
  *@argc: counts the arguments passed to the function
  *@argv: is a one-dimensional array of strings
  *Return: 0 for success
  */


int main(int argc, char *argv[])
{
	int i, sum, j, k, num;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] > '9' || argv[i][k] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (j = 1; j < argc; j++)
	{
		num = atoi(argv[j]);
		if (num >= 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
