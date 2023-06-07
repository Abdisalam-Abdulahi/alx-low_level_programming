#include "main.h"

/**
  *factorial - returns the factorial of a number
  *@n: is the number in which it factorial will be returned
  *Return: returns a the factorial result of n
  */

int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
