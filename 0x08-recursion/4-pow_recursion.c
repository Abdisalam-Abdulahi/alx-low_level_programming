#include <stdio.h>
#include "main.h"
/**
  * _pow_recursion - function that returns the value of x poer y
  *@x: is base
  *@y: is the power
  *Return: returns the value of x power y
  */

int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion((x), y - 1));
}
