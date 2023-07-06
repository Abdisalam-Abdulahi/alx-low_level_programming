#include "main.h"


/**
  *set_bit -  sets the value of a bit to 1 at a given inde
  *@n: points to integer
  *@index: index
  *Return: 1 for success -1 for failure
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long temp;

	if (index > 64)
		return (-1);

	temp = 1;
	while (index > 0)
	{
		index--;
		temp *= 2;
	}
	*n += temp;

	return (1);
}
