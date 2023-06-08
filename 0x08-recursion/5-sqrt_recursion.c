#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of a number
  *@n: is the number in which its square will be returned
  *Return: return the natural square of n
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));

}

/**
  * _sqrt - helper function
  *@x: equals to @n
  *@i: incrementer
  *Return: return the natural square of x
  */

int _sqrt(int x, int i)
{
	if (i * i > x)
		return (-1);
	if (i * i == x)
		return (i);
	return (_sqrt(x, i + 1));
}
