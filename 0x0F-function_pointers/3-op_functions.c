#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *op_add - adds two integers
  *@a: first
  *@b: second
  *Return: result of the operation
  */

int op_add(int a, int b)
{
	return (a + b);
}


/**
  *op_sub - subtracts two integers
  *@a: first
  *@b: second
  *Return: result of the operation
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - multiplies two integers
  *@a: first
  *@b: second
  *Return: result of the operation
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - divides two integers
  *@a: first
  *@b: second
  *Return: result of the operation
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod - modolize two integers
  *@a: first
  *@b: second
  *Return: result of the operation
  */
int op_mod(int a, int b)
{
	return (a % b);
}
