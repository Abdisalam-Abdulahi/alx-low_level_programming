#include "main.h"

/**
  *is_prime_number - a function that calculates whether anumber is prime or not
  *@n: is the number in which its prime number we are searching
  *Return: returns another recursive function
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (recursive_pm(n, n - 1));
}


/**
  *recursive_pm - a helper function
  *@n: is the number in which its prime number we are searching
  *@i: decremetaor
  *Return: returns 0 if n is prime and 1 if not
  */

int recursive_pm(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (recursive_pm(n, i - 1));
}
